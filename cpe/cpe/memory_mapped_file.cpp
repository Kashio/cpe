#include "stdafx.h"
#include "memory_mapped_file.h"
#include "file_memory_mapping_exception.h"

namespace cpe
{
	namespace utils
	{
		MemoryMappedFile::MemoryMappedFile(const std::wstring file_name)
		{
			HANDLE file_handle_ = CreateFile(file_name.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr,
				OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
			if (file_handle_ == INVALID_HANDLE_VALUE)
			{
				throw new cpe::exceptions::FileMemoryMappingException("Couldn't open file with CreateFile().", GetLastError());
			}

			HANDLE file_mapping_ = CreateFileMapping(file_handle_, nullptr, PAGE_READONLY, 0, 0, nullptr);
			if (file_mapping_ == nullptr)
			{
				CloseHandle(file_handle_);
				throw new cpe::exceptions::FileMemoryMappingException("Couldn't open file mapping with CreateFileMapping().", GetLastError());
			}

			LPVOID file_base_ = MapViewOfFile(file_mapping_, FILE_MAP_READ, 0, 0, 0);
			if (file_base_ == nullptr)
			{
				CloseHandle(file_mapping_);
				CloseHandle(file_handle_);
				throw new cpe::exceptions::FileMemoryMappingException("Couldn't map view of file with MapViewOfFile().", GetLastError());
			}
		}

		MemoryMappedFile::~MemoryMappedFile()
		{
			UnmapViewOfFile(file_base);
			CloseHandle(file_mapping_);
			CloseHandle(file_handle_);
		}
	}
}
