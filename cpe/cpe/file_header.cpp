#include "stdafx.h"
#include "file_header.h"

namespace cpe
{
	FileHeader::FileHeader(IMAGE_FILE_HEADER& image_file_header)
		: image_file_header_ {image_file_header}
	{
	}


	FileHeader::~FileHeader()
	{
	}

	WORD FileHeader::GetMachine() const
	{
		return image_file_header_.Machine;
	}

	WORD FileHeader::GetNumberOfSections() const
	{
		return image_file_header_.NumberOfSections;
	}

	DWORD FileHeader::GetTimeDateStamp() const
	{
		return image_file_header_.TimeDateStamp;
	}

	time_t FileHeader::GetPrettyTimeDateStamp() const
	{
		return time_t{ image_file_header_.TimeDateStamp };
	}

	DWORD FileHeader::GetRvaOfSymbolTable() const
	{
		return image_file_header_.PointerToSymbolTable;
	}

	DWORD FileHeader::GetNumberOfSymbols() const
	{
		return image_file_header_.NumberOfSymbols;
	}

	WORD FileHeader::GetSizeOfOptionalHeader() const
	{
		return image_file_header_.SizeOfOptionalHeader;
	}

	WORD FileHeader::GetCharacteristics() const
	{
		return image_file_header_.Characteristics;
	}

	void FileHeader::SetMachine(WORD machine)
	{
		image_file_header_.Machine = machine;
	}

	void FileHeader::SetNumberOfSections(WORD number_of_sections)
	{
		image_file_header_.NumberOfSections = number_of_sections;
	}

	void FileHeader::SetTimeDateStamp(DWORD time_date_stamp)
	{
		image_file_header_.TimeDateStamp = time_date_stamp;
	}

	void FileHeader::SetRvaOfSymbolTable(DWORD rva_of_symbol_table)
	{
		image_file_header_.PointerToSymbolTable = rva_of_symbol_table;
	}

	void FileHeader::SetNumberOfSymbols(DWORD number_of_symbols)
	{
		image_file_header_.NumberOfSymbols = number_of_symbols;
	}

	void FileHeader::SetSizeOfOptionalHeader(WORD size_of_optional_header)
	{
		image_file_header_.SizeOfOptionalHeader = size_of_optional_header;
	}

	void FileHeader::SetCharacteristics(WORD characteristics)
	{
		image_file_header_.Characteristics = characteristics;
	}

	bool FileHeader::IsX86Machine() const
	{
		return image_file_header_.Machine == IMAGE_FILE_MACHINE_I386;
	}

	bool FileHeader::IsX64Machine() const
	{
		return image_file_header_.Machine == IMAGE_FILE_MACHINE_IA64;
	}

	bool FileHeader::IsAmd64Machine() const
	{
		return image_file_header_.Machine == IMAGE_FILE_MACHINE_AMD64;
	}

	bool FileHeader::IsRelocationInfoStripped() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_RELOCS_STRIPPED;
	}

	bool FileHeader::IsExecutable() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_EXECUTABLE_IMAGE;
	}

	bool FileHeader::IsLineNumbersInfoStripped() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_LINE_NUMS_STRIPPED;
	}

	bool FileHeader::IsLocalSymbolsInfoStripped() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_LOCAL_SYMS_STRIPPED;
	}

	bool FileHeader::IsWorkingSetTrimmed() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_AGGRESIVE_WS_TRIM;
	}

	bool FileHeader::IsLargeAddressAware() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_LARGE_ADDRESS_AWARE;
	}

	bool FileHeader::IsLittleEndian() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_BYTES_REVERSED_LO;
	}

	bool FileHeader::Is32BitSupported() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_32BIT_MACHINE;
	}

	bool FileHeader::IsDebugInfoStripped() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_DEBUG_STRIPPED;
	}

	bool FileHeader::IsOnRemovableMedia() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP;
	}

	bool FileHeader::IsOnNetworkDrive() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_NET_RUN_FROM_SWAP;
	}

	bool FileHeader::IsASystemFile() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_SYSTEM;
	}

	bool FileHeader::IsADll() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_DLL;
	}

	bool FileHeader::IsOnlyRunOnSingleProcessorMachines() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_UP_SYSTEM_ONLY;
	}

	bool FileHeader::IsBigEndian() const
	{
		return image_file_header_.Characteristics & IMAGE_FILE_BYTES_REVERSED_HI;
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