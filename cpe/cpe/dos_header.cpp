#include "stdafx.h"
#include "dos_header.h"

namespace cpe
{
	DosHeader::DosHeader(const LPVOID file_base)
		: image_dos_header_{ *reinterpret_cast<PIMAGE_DOS_HEADER>(file_base) }
	{
	}
}