#include "stdafx.h"
#include "pe_file_header.h"
#include "dos_header.h"

namespace cpe
{
	template <typename T>
	pe_file_header<T>::pe_file_header()
	{
	}

	template <typename T>
	pe_file_header<T>::~pe_file_header()
	{
	}

	template <typename T>
	size_t pe_file_header<T>::GetHeaderSize() const
	{
		return sizeof(T);
	}
	
	template class pe_file_header<DosHeader>;
}
