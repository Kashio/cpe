#include "stdafx.h"
#include "optional_header.h"

namespace cpe
{
	OptionalHeader::OptionalHeader(NtHeaders* nt_headers, const PIMAGE_OPTIONAL_HEADER image_optional_header)
		: nt_headers_ { nt_headers }, image_optional_header_ { image_optional_header }
	{
	}


	OptionalHeader::~OptionalHeader()
	{
	}

	WORD OptionalHeader::GetMagic() const
	{
		return image_optional_header_->Magic;
	}

	BYTE OptionalHeader::GetMajorLinkerVersion() const
	{
		return image_optional_header_->MajorLinkerVersion;
	}

	BYTE OptionalHeader::GetMinorLinkerVersion() const
	{
		return image_optional_header_->MinorLinkerVersion;
	}

	DWORD OptionalHeader::GetSizeOfCode() const
	{
		return image_optional_header_->SizeOfCode;
	}

	DWORD OptionalHeader::GetSizeOfInitializedData() const
	{
		return image_optional_header_->SizeOfInitializedData;
	}

	DWORD OptionalHeader::GetSizeOfUninitializedData() const
	{
		return image_optional_header_->SizeOfUninitializedData;
	}

	DWORD OptionalHeader::GetAddressOfEntryPoint() const
	{
		return image_optional_header_->AddressOfEntryPoint;
	}

	DWORD OptionalHeader::GetBaseOfCode() const
	{
		return image_optional_header_->BaseOfCode;
	}

	ULONGLONG OptionalHeader::GetImageBase() const
	{
		return image_optional_header_->ImageBase;
	}

	DWORD OptionalHeader::GetSectionAlignment() const
	{
		return image_optional_header_->SectionAlignment;
	}

	DWORD OptionalHeader::GetFileAlignment() const
	{
		return image_optional_header_->FileAlignment;
	}

	WORD OptionalHeader::GetMajorOperatingSystemVersion() const
	{
		return image_optional_header_->MajorOperatingSystemVersion;
	}

	WORD OptionalHeader::GetMinorOperatingSystemVersion() const
	{
		return image_optional_header_->MinorOperatingSystemVersion;
	}

	WORD OptionalHeader::GetMajorImageVersion() const
	{
		return image_optional_header_->MajorImageVersion;
	}

	WORD OptionalHeader::GetMinorImageVersion() const
	{
		return image_optional_header_->MinorImageVersion;
	}

	WORD OptionalHeader::GetMajorSubsystemVersion() const
	{
		return image_optional_header_->MajorSubsystemVersion;
	}

	WORD OptionalHeader::GetMinorSubsystemVersion() const
	{
		return image_optional_header_->MinorSubsystemVersion;
	}

	DWORD OptionalHeader::GetWin32VersionValue() const
	{
		return image_optional_header_->Win32VersionValue;
	}

	DWORD OptionalHeader::GetSizeOfImage() const
	{
		return image_optional_header_->SizeOfImage;
	}

	DWORD OptionalHeader::GetSizeOfHeaders() const
	{
		return image_optional_header_->SizeOfHeaders;
	}

	DWORD OptionalHeader::GetCheckSum() const
	{
		return image_optional_header_->CheckSum;
	}

	WORD OptionalHeader::GetSubsystem() const
	{
		return image_optional_header_->Subsystem;
	}

	WORD OptionalHeader::GetDllCharacteristics() const
	{
		return image_optional_header_->DllCharacteristics;
	}

	ULONGLONG OptionalHeader::GetSizeOfStackReserve() const
	{
		return image_optional_header_->SizeOfStackReserve;
	}

	ULONGLONG OptionalHeader::GetSizeOfStackCommit() const
	{
		return image_optional_header_->SizeOfStackCommit;
	}

	ULONGLONG OptionalHeader::GetSizeOfHeapReserve() const
	{
		return image_optional_header_->SizeOfHeapReserve;
	}

	ULONGLONG OptionalHeader::GetSizeOfHeapCommit() const
	{
		return image_optional_header_->SizeOfHeapCommit;
	}

	DWORD OptionalHeader::GetLoaderFlags() const
	{
		return image_optional_header_->LoaderFlags;
	}

	DWORD OptionalHeader::GetNumberOfRvaAndSizes() const
	{
		return image_optional_header_->NumberOfRvaAndSizes;
	}

	void OptionalHeader::SetMagic(const WORD magic)
	{
		image_optional_header_->Magic = magic;
	}

	void OptionalHeader::SetMajorLinkerVersion(const BYTE major_linker_version)
	{
		image_optional_header_->MajorLinkerVersion = major_linker_version;
	}

	void OptionalHeader::SetMinorLinkerVersion(const BYTE minor_linker_version)
	{
		image_optional_header_->MinorLinkerVersion = minor_linker_version;
	}

	void OptionalHeader::SetSizeOfCode(const DWORD size_of_code)
	{
		image_optional_header_->SizeOfCode = size_of_code;
	}

	void OptionalHeader::SetSizeOfInitializedData(const DWORD size_of_initialized_data)
	{
		image_optional_header_->SizeOfInitializedData = size_of_initialized_data;
	}

	void OptionalHeader::SetSizeOfUninitializedData(const DWORD size_of_uninitialized_data)
	{
		image_optional_header_->SizeOfUninitializedData = size_of_uninitialized_data;
	}

	void OptionalHeader::SetAddressOfEntryPoint(const DWORD address_of_entry_point)
	{
		image_optional_header_->AddressOfEntryPoint = address_of_entry_point;
	}

	void OptionalHeader::SetBaseOfCode(const DWORD base_of_code)
	{
		image_optional_header_->BaseOfCode = base_of_code;
	}

	void OptionalHeader::SetImageBase(const ULONGLONG image_base)
	{
		image_optional_header_->ImageBase = image_base;
	}

	void OptionalHeader::SetSectionAlignment(const DWORD section_alignment)
	{
		image_optional_header_->SectionAlignment = section_alignment;
	}

	void OptionalHeader::SetFileAlignment(const DWORD file_alignment)
	{
		image_optional_header_->FileAlignment = file_alignment;
	}

	void OptionalHeader::SetMajorOperatingSystemVersion(const WORD major_operating_system_version)
	{
		image_optional_header_->MajorOperatingSystemVersion = major_operating_system_version;
	}

	void OptionalHeader::SetMinorOperatingSystemVersion(const WORD minor_operating_system_version)
	{
		image_optional_header_->MinorOperatingSystemVersion = minor_operating_system_version;
	}

	void OptionalHeader::SetMajorImageVersion(const WORD major_image_version)
	{
		image_optional_header_->MajorImageVersion = major_image_version;
	}

	void OptionalHeader::SetMinorImageVersion(const WORD minor_image_version)
	{
		image_optional_header_->MinorImageVersion = minor_image_version;
	}

	void OptionalHeader::SetMajorSubsystemVersion(const WORD major_subsystem_version)
	{
		image_optional_header_->MajorSubsystemVersion = major_subsystem_version;
	}

	void OptionalHeader::SetMinorSubsystemVersion(const WORD minor_subsystem_version)
	{
		image_optional_header_->MinorSubsystemVersion = minor_subsystem_version;
	}

	void OptionalHeader::SetWin32VersionValue(const DWORD win32_version_value)
	{
		image_optional_header_->Win32VersionValue = win32_version_value;
	}

	void OptionalHeader::SetSizeOfImage(const DWORD size_of_image)
	{
		image_optional_header_->SizeOfImage = size_of_image;
	}

	void OptionalHeader::SetSizeOfHeaders(const DWORD size_of_headers)
	{
		image_optional_header_->SizeOfHeaders = size_of_headers;
	}

	void OptionalHeader::SetCheckSum(const DWORD checksum)
	{
		image_optional_header_->CheckSum = checksum;
	}

	void OptionalHeader::SetSubsystem(const WORD subsystem)
	{
		image_optional_header_->Subsystem = subsystem;
	}

	void OptionalHeader::SetDllCharacteristics(const WORD dll_characteristics)
	{
		image_optional_header_->DllCharacteristics = dll_characteristics;
	}

	void OptionalHeader::SetSizeOfStackReserve(const ULONGLONG size_of_stack_reserve)
	{
		image_optional_header_->SizeOfStackReserve = size_of_stack_reserve;
	}

	void OptionalHeader::SetSizeOfStackCommit(const ULONGLONG size_of_stack_commit)
	{
		image_optional_header_->SizeOfStackCommit = size_of_stack_commit;
	}

	void OptionalHeader::SetSizeOfHeapReserve(const ULONGLONG size_of_heap_reserve)
	{
		image_optional_header_->SizeOfHeapReserve = size_of_heap_reserve;
	}

	void OptionalHeader::SetSizeOfHeapCommit(const ULONGLONG size_of_heap_commit)
	{
		image_optional_header_->SizeOfHeapCommit = size_of_heap_commit;
	}

	void OptionalHeader::SetLoaderFlags(const DWORD loader_flags)
	{
		image_optional_header_->LoaderFlags = loader_flags;
	}

	void OptionalHeader::SetNumberOfRvaAndSizes(const DWORD number_of_rva_and_sizes)
	{
		image_optional_header_->NumberOfRvaAndSizes = number_of_rva_and_sizes;
	}

	bool OptionalHeader::IsValid() const
	{
		switch (nt_headers_->file_header.GetMachine())
		{
		case IMAGE_FILE_MACHINE_I386:
			return image_optional_header_->Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC;
		case IMAGE_FILE_MACHINE_IA64:
		case IMAGE_FILE_MACHINE_AMD64:
			return image_optional_header_->Magic == IMAGE_NT_OPTIONAL_HDR64_MAGIC;
		default:
			return image_optional_header_->Magic == IMAGE_ROM_OPTIONAL_HDR_MAGIC;
		}
	}
}
