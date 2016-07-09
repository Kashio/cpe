#ifndef PE_FILE_H
#define PE_FILE_H

#ifdef CPE_EXPORTS
#define CPE_API __declspec(dllexport)
#else
#define CPE_API __declspec(dllimport)
#endif

#include "memory_mapped_file.h"
#include "dos_header.h"

namespace cpe
{
	class CPE_API PeFile {
	public:
		PeFile(std::wstring);
		DosHeader dos_header;
	private:
		utils::MemoryMappedFile memory_mapped_file_;
	};
}

#endif