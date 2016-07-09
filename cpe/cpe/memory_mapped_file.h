#ifndef MEMORY_MAPPED_FILE_H
#define MEMORY_MAPPED_FILE_H

#include <string>
#include "stdafx.h"

namespace cpe
{
	namespace utils
	{
		class MemoryMappedFile
		{
		public:
			MemoryMappedFile(const std::wstring);
			~MemoryMappedFile();
			LPVOID file_base;
		private:
			HANDLE file_handle_;
			HANDLE file_mapping_;
		};
	}
}

#endif