#include "stdafx.h"
#include "file_header.h"

namespace cpe
{
	FileHeader::FileHeader(NtHeaders* nt_headers, const PIMAGE_FILE_HEADER image_file_header)
		: nt_headers_ { nt_headers }, image_file_header_ {image_file_header}
	{
	}


	FileHeader::~FileHeader()
	{
	}

	WORD FileHeader::GetMachine() const
	{
		return image_file_header_->Machine;
	}

	WORD FileHeader::GetNumberOfSections() const
	{
		return image_file_header_->NumberOfSections;
	}

	DWORD FileHeader::GetTimeDateStamp() const
	{
		return image_file_header_->TimeDateStamp;
	}

	time_t FileHeader::GetPrettyTimeDateStamp() const
	{
		return time_t{ image_file_header_->TimeDateStamp };
	}

	DWORD FileHeader::GetRvaOfSymbolTable() const
	{
		return image_file_header_->PointerToSymbolTable;
	}

	DWORD FileHeader::GetNumberOfSymbols() const
	{
		return image_file_header_->NumberOfSymbols;
	}

	WORD FileHeader::GetSizeOfOptionalHeader() const
	{
		return image_file_header_->SizeOfOptionalHeader;
	}

	WORD FileHeader::GetCharacteristics() const
	{
		return image_file_header_->Characteristics;
	}

	void FileHeader::SetMachine(const WORD machine)
	{
		image_file_header_->Machine = machine;
	}

	void FileHeader::SetNumberOfSections(const WORD number_of_sections)
	{
		image_file_header_->NumberOfSections = number_of_sections;
	}

	void FileHeader::SetTimeDateStamp(const DWORD time_date_stamp)
	{
		image_file_header_->TimeDateStamp = time_date_stamp;
	}

	void FileHeader::SetRvaOfSymbolTable(const DWORD rva_of_symbol_table)
	{
		image_file_header_->PointerToSymbolTable = rva_of_symbol_table;
	}

	void FileHeader::SetNumberOfSymbols(const DWORD number_of_symbols)
	{
		image_file_header_->NumberOfSymbols = number_of_symbols;
	}

	void FileHeader::SetSizeOfOptionalHeader(const WORD size_of_optional_header)
	{
		image_file_header_->SizeOfOptionalHeader = size_of_optional_header;
	}

	void FileHeader::SetCharacteristics(const WORD characteristics)
	{
		image_file_header_->Characteristics = characteristics;
	}

	bool FileHeader::IsX86Machine() const
	{
		return image_file_header_->Machine == IMAGE_FILE_MACHINE_I386;
	}

	bool FileHeader::IsX64Machine() const
	{
		return image_file_header_->Machine == IMAGE_FILE_MACHINE_IA64;
	}

	bool FileHeader::IsAmd64Machine() const
	{
		return image_file_header_->Machine == IMAGE_FILE_MACHINE_AMD64;
	}

	bool FileHeader::IsRelocationInfoStripped() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_RELOCS_STRIPPED) != 0;
	}

	bool FileHeader::IsExecutable() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_EXECUTABLE_IMAGE) != 0;
	}

	bool FileHeader::IsLineNumbersInfoStripped() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_LINE_NUMS_STRIPPED) != 0;
	}

	bool FileHeader::IsLocalSymbolsInfoStripped() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_LOCAL_SYMS_STRIPPED) != 0;
	}

	bool FileHeader::IsWorkingSetTrimmed() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_AGGRESIVE_WS_TRIM) != 0;
	}

	bool FileHeader::IsLargeAddressAware() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_LARGE_ADDRESS_AWARE) != 0;
	}

	bool FileHeader::IsLittleEndian() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_BYTES_REVERSED_LO) != 0;
	}

	bool FileHeader::Is32BitSupported() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_32BIT_MACHINE) != 0;
	}

	bool FileHeader::IsDebugInfoStripped() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_DEBUG_STRIPPED) != 0;
	}

	bool FileHeader::IsOnRemovableMedia() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP) != 0;
	}

	bool FileHeader::IsOnNetworkDrive() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_NET_RUN_FROM_SWAP) != 0;
	}

	bool FileHeader::IsASystemFile() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_SYSTEM) != 0;
	}

	bool FileHeader::IsADll() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_DLL) != 0;
	}

	bool FileHeader::IsOnlyRunOnSingleProcessorMachines() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_UP_SYSTEM_ONLY) != 0;
	}

	bool FileHeader::IsBigEndian() const
	{
		return (image_file_header_->Characteristics & IMAGE_FILE_BYTES_REVERSED_HI) != 0;
	}

	bool FileHeader::IsValid() const
	{
		return true;
	}

	size_t FileHeader::GetHeaderSize() const
	{
		return IMAGE_SIZEOF_FILE_HEADER;
	}
}