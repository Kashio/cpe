#ifndef PE_FILE_H
#define PE_FILE_H

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