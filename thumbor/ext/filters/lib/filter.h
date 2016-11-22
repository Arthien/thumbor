#ifndef __FILTER__H__
#define __FILTER__H__

#include <Python.h>
#include "image_utils.h"

#define FILTER_MODULE(NAME, DOC)    static PyMethodDef NAME ## _methods[] = { \
                                        {"apply", NAME ## _apply, METH_VARARGS, DOC}, \
                                        {0, 0, 0, 0} \
                                    }; \
                                    static struct PyModuleDef moduledef = { \
                                    	PyModuleDef_HEAD_INIT, \
                                    	"", \
                                    	DOC, \
                                    	-1, \
                                    	NAME ## _methods, \
                                    	NULL, \
                                    	NULL, \
                                    	NULL, \
                                    	NULL \
                                    }; \
                                    PyMODINIT_FUNC PyInit_ ## NAME(void) { \
                                        return PyModule_Create(&moduledef); \
                                    } \


#endif
