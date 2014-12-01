#include "clib.h"


static PyMethodDef ClibMethods[] = {
    {"func",  clib_func, METH_VARARGS,
     "Execute a shell command."},
    {"shr", clib_shr, METH_VARARGS,
        "Shift right"},
    {"shl", clib_shl, METH_VARARGS,
        "Shift left"},
    {"ror", clib_ror, METH_VARARGS,
        "Ror Shift right"},
    {"rol", clib_rol, METH_VARARGS,
        "Rol Shift right"},
    {"neg", clib_neg, METH_VARARGS,
        "Neg command"},
    {"xor", clib_xor, METH_VARARGS,
        "Xor command"},
    {"notc", clib_not, METH_VARARGS,
        "Not command"},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static PyObject *clib_func(PyObject *self, PyObject *args) {
    const char *command;

    if (!PyArg_ParseTuple(args, "s", &command))
        return NULL;

    printf("%s", command);
    return Py_BuildValue("i", 0);
}

static PyObject *clib_shr(PyObject *self, PyObject *args)
{
    unsigned int reg = 0, shift = 0;
    unsigned res = 0;

    if (!PyArg_ParseTuple(args, "II", &reg, &shift))
        return NULL;
    if (shift < 32)
        res = reg >> shift;
        

    return Py_BuildValue("i", res);
}

static PyObject *clib_shl(PyObject *self, PyObject *args)
{
    unsigned int reg = 0, shift = 0;
    unsigned res = 0;

    if (!PyArg_ParseTuple(args, "II", &reg, &shift))
        return NULL;
    if (shift < 32)
        res = reg << shift;

    return Py_BuildValue("i", res);
}

static PyObject *clib_ror(PyObject *self, PyObject *args)
{
    unsigned int reg = 0, shift = 0;
    unsigned int res = 0;

    if (!PyArg_ParseTuple(args, "II", &reg, &shift))
        return NULL;

    #define ROR(x, shift) ( (x >> shift) | (x << (32 - shift))) 
    res = ROR(reg, shift);
    //asm volatile ( "ror %1, %0" : "=r" (reg) : "r" (reg), "0" ((char)shift) ); // sum = x + y;
    return Py_BuildValue("I", res);
}

static PyObject *clib_rol(PyObject *self, PyObject *args)
{
    unsigned int reg = 0, shift = 0;
    unsigned int res = 0;

    if (!PyArg_ParseTuple(args, "II", &reg, &shift))
        return NULL;

    //asm volatile ( "rol %1, %0" : "=r" (reg) : "r" (reg), "0" ((char)shift) ); // sum = x + y;
    #define ROL(x, shift) ( (x << shift) | (x >> (32 - shift)) )
    res = ROL(reg, shift);
    return Py_BuildValue("I", res);
}

static PyObject *clib_neg(PyObject *self, PyObject *args)
{
    int reg = 0;

    if (!PyArg_ParseTuple(args, "I", &reg))
        return NULL;

    return Py_BuildValue("i", -reg);
}

static PyObject *clib_not(PyObject *self, PyObject *args)
{
    int reg = 0;

    if (!PyArg_ParseTuple(args, "I", &reg))
        return NULL;

    return Py_BuildValue("i", ~reg);
}

static PyObject *clib_xor(PyObject *self, PyObject *args)
{
    int reg1 = 0, reg2 = 0;

    if (!PyArg_ParseTuple(args, "II", &reg1, &reg2))
        return NULL;

    return Py_BuildValue("i", reg1^reg2);
}

static PyObject *ClibError;

PyMODINIT_FUNC
initclib(void)
{
    PyObject *m;

    m = Py_InitModule("clib", ClibMethods);
    if (m == NULL)
        return;

    ClibError = PyErr_NewException("clib.error", NULL, NULL);
    Py_INCREF(ClibError);
    PyModule_AddObject(m, "error", ClibError);
}