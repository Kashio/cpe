#ifndef FILE_HEADER_H
#define FILE_HEADER_H

#include "pe_file_header.h"

namespace cpe
{
	class CPE_API FileHeader : PeFileHeader<FileHeader>
	{
	public:
		FileHeader(IMAGE_FILE_HEADER&);
		~FileHeader();
		WORD GetMachine() const;
		WORD GetNumberOfSections() const;
		DWORD GetTimeDateStamp() const;
		time_t GetPrettyTimeDateStamp() const;
		DWORD GetRvaOfSymbolTable() const;
		DWORD GetNumberOfSymbols() const;
		WORD GetSizeOfOptionalHeader() const;
		WORD GetCharacteristics() const;
		void SetMachine(WORD);
		void SetNumberOfSections(WORD);
		void SetTimeDateStamp(DWORD);
		void SetRvaOfSymbolTable(DWORD);
		void SetNumberOfSymbols(DWORD);
		void SetSizeOfOptionalHeader(WORD);
		void SetCharacteristics(WORD);
		bool IsX86Machine() const;
		bool IsX64Machine() const;
		bool IsAmd64Machine() const;
		bool IsRelocationInfoStripped() const;
		bool IsExecutable() const;
		bool IsLineNumbersInfoStripped() const;
		bool IsLocalSymbolsInfoStripped() const;
		bool IsWorkingSetTrimmed() const;
		bool IsLargeAddressAware() const;
		bool IsLittleEndian() const;
		bool Is32BitSupported() const;
		bool IsDebugInfoStripped() const;
		bool IsOnRemovableMedia() const;
		bool IsOnNetworkDrive() const;
		bool IsASystemFile() const;
		bool IsADll() const;
		bool IsOnlyRunOnSingleProcessorMachines() const;
		bool IsBigEndian() const;
		bool IsValid() const override final;
		size_t GetHeaderSize() const override final;
	private:
		IMAGE_FILE_HEADER& image_file_header_;
	};
}

#endif