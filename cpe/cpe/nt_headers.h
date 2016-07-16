#pragma once
#ifndef NT_HEADERS_H
#define NT_HEADERS_H

#include "pe_file_header.h"
#include "file_header.h"

namespace cpe
{
	class CPE_API NtHeaders : public PeFileHeader<NtHeaders>
	{
	public:
		NtHeaders(const LPVOID header_base);
		~NtHeaders();
		DWORD GetSignature() const;
		void SetSignature(DWORD);
		bool IsValid() const override final;
		FileHeader file_header;
	private:
		IMAGE_NT_HEADERS image_nt_headers_;
	};
}

#endif