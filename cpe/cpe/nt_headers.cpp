#include "stdafx.h"
#include "nt_headers.h"

namespace cpe
{
	NtHeaders::NtHeaders(const LPVOID header_base)
		: image_nt_headers_ { reinterpret_cast<PIMAGE_NT_HEADERS>(header_base) },
		file_header { this, &(image_nt_headers_->FileHeader) },
		optional_header { this, &(image_nt_headers_->OptionalHeader) }
	{
	}


	NtHeaders::~NtHeaders()
	{
	}

	DWORD NtHeaders::GetSignature() const
	{
		return image_nt_headers_->Signature;
	}

	void NtHeaders::SetSignature(const DWORD signature)
	{
		image_nt_headers_->Signature = signature;
	}

	bool NtHeaders::IsValid() const
	{
		return image_nt_headers_->Signature == IMAGE_NT_SIGNATURE;
	}
}
