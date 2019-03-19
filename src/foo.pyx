# distutils: language=c++
# cython: language_level=3

cdef public foo1(int nb):
    return [i for i in range(nb)]

cdef public foo2(int nb, int* output):
    for i in range(nb):
        output[i] = i

from libcpp.vector cimport vector
cdef public foo3(int nb, vector[int]& output):
    for i in range(nb):
        output.push_back(i)
