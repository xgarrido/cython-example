/* Generated by Cython 0.29.6 */

#ifndef __PYX_HAVE__foo
#define __PYX_HAVE__foo


#ifndef __PYX_HAVE_API__foo

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C PyObject *foo1(int);
__PYX_EXTERN_C PyObject *foo2(int, int *);
__PYX_EXTERN_C PyObject *foo3(int, std::vector<int>  &);

#endif /* !__PYX_HAVE_API__foo */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initfoo(void);
#else
PyMODINIT_FUNC PyInit_foo(void);
#endif

#endif /* !__PYX_HAVE__foo */
