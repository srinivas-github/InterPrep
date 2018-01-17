/**
 * 1. When using the C code or library in C++, then we need extern  to avoid linkage problems
 * 2. C++ will compiles and decorates the funtions with arguments names to achieve overloading, 
 *   where as C code does mangles the function names.
 */
#include <iostream>

extern "C" {
#include "cfile.h"
}

int main()
{
    fun(); //calling the C function here
}
