#include <python3.10/Python.h>

int main()
{
    Py_Initialize();
    FILE *file = fopen("script.py", "r");
    PyRun_SimpleFile(file, "script.py");
    fclose(file);
    Py_Finalize();
    return 0;
}
