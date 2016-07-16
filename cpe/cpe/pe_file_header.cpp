#include "stdafx.h"
#include "pe_file_header.h"
#include "dos_header.h"
#include "nt_headers.h"

namespace cpe
{

	template <typename T>
	PeFileHeader<T>::PeFileHeader()
	{
	}

	template <typename T>
	PeFileHeader<T>::~PeFileHeader()
	{
	}

	template <typename T>
	size_t PeFileHeader<T>::GetHeaderSize() const
	{
		return sizeof(T);
	}
	
	template class PeFileHeader<DosHeader>;
	template class PeFileHeader<NtHeaders>;
}
