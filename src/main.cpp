// STL headers
#include <iostream>
#include <vector>

// Python stuff
#include <Python.h>

// Our module
#include "foo.h"

void test_foo1()
{
  std::cout << "**** Converting a python list into a std::vector ****" << std::endl;
  std::vector<int> data;
  PyObject* incoming = foo1(10);
  if (PyList_Check(incoming)) {
    for (Py_ssize_t i = 0; i < PyList_Size(incoming); i++) {
      PyObject *value = PyList_GetItem(incoming, i);
      data.push_back(PyFloat_AsDouble(value) );
    }
  }
  for (size_t i = 0; i < data.size(); i++) {
    std::cout << "foo1(" << i << ") = " << data[i] << std::endl;
  }
}

void test_foo2()
{
  std::cout << "**** Passing a pointer of int to a python function ****" << std::endl;
  const size_t nb = 10;
  int* data = new int[nb];
  foo2(nb, data);
  for (size_t i = 0; i < nb; i++) {
    std::cout << "foo2(" << i << ") = " << data[i] << std::endl;
  }
}

void test_foo3()
{
  std::cout << "**** Passing a reference to a std::vector ****" << std::endl;
  const size_t nb = 10;
  std::vector<int> data;
  foo3(nb, data);
  for (size_t i = 0; i < nb; i++) {
    std::cout << "foo3(" << i << ") = " << data[i] << std::endl;
  }
}

int main(int argc, char *argv[]) {
  Py_Initialize();
  test_foo1();
  test_foo2();
  test_foo3();
  Py_Finalize();
  return 0;
}
