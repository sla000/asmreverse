#include <Python.h>
#include <stdio.h>


static PyObject *clib_func(PyObject *self, PyObject *args);

static PyObject *clib_shr(PyObject *self, PyObject *args);
static PyObject *clib_shl(PyObject *self, PyObject *args);

static PyObject *clib_ror(PyObject *self, PyObject *args);
static PyObject *clib_rol(PyObject *self, PyObject *args);

static PyObject *clib_neg(PyObject *self, PyObject *args);

static PyObject *clib_not(PyObject *self, PyObject *args);
static PyObject *clib_xor(PyObject *self, PyObject *args);
static PyObject *clib_or(PyObject *self, PyObject *args);
static PyObject *clib_and(PyObject *self, PyObject *args);

static PyObject *clib_add(PyObject *self, PyObject *args);
static PyObject *clib_sub(PyObject *self, PyObject *args);