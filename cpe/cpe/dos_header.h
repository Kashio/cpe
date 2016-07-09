#ifndef DOS_HEADER_H
#define DOS_HEADER_H

#include "stdafx.h"

namespace cpe
{
	class DosHeader
	{
	public:
		DosHeader(const LPVOID file_base);
	private:
		IMAGE_DOS_HEADER image_dos_header_;
	};
}

#endif
