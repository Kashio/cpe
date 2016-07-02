// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CPE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CPE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CPE_EXPORTS
#define CPE_API __declspec(dllexport)
#else
#define CPE_API __declspec(dllimport)
#endif

// This class is exported from the cpe.dll
class CPE_API PeFile {
public:
	PeFile(void);
	// TODO: add your methods here.
};

extern CPE_API int ncpe;

CPE_API int fncpe(void);
