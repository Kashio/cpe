// cpe.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "pe_file.h"


// This is an example of an exported variable
CPE_API int ncpe=0;

// This is an example of an exported function.
CPE_API int fncpe(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see cpe.h for the class definition
Ccpe::Ccpe()
{
    return;
}
