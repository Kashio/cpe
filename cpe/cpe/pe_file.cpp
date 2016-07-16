#include "stdafx.h"
#include "pe_file.h"

namespace cpe
{
	PeFile::PeFile(const std::wstring file_name)
		: memory_mapped_file_{ file_name }, dos_header{ memory_mapped_file_.file_base }
	{
	}
}
