#ifndef OPTIONAL_HEADER_H
#define OPTIONAL_HEADER_H

#include "pe_file_header.h"
#include "nt_headers.h"

namespace cpe
{
	class OptionalHeader : public PeFileHeader<OptionalHeader>
	{
	public:
		OptionalHeader(NtHeaders*, const PIMAGE_OPTIONAL_HEADER);
		~OptionalHeader();
		WORD GetMagic() const;
		BYTE GetMajorLinkerVersion() const;
		BYTE GetMinorLinkerVersion() const;
		DWORD GetSizeOfCode() const;
		DWORD GetSizeOfInitializedData() const;
		DWORD GetSizeOfUninitializedData() const;
		DWORD GetAddressOfEntryPoint() const;
		DWORD GetBaseOfCode() const;
		ULONGLONG GetImageBase() const;
		DWORD GetSectionAlignment() const;
		DWORD GetFileAlignment() const;
		WORD GetMajorOperatingSystemVersion() const;
		WORD GetMinorOperatingSystemVersion() const;
		WORD GetMajorImageVersion() const;
		WORD GetMinorImageVersion() const;
		WORD GetMajorSubsystemVersion() const;
		WORD GetMinorSubsystemVersion() const;
		DWORD GetWin32VersionValue() const;
		DWORD GetSizeOfImage() const;
		DWORD GetSizeOfHeaders() const;
		DWORD GetCheckSum() const;
		WORD GetSubsystem() const;
		WORD GetDllCharacteristics() const;
		ULONGLONG GetSizeOfStackReserve() const;
		ULONGLONG GetSizeOfStackCommit() const;
		ULONGLONG GetSizeOfHeapReserve() const;
		ULONGLONG GetSizeOfHeapCommit() const;
		DWORD GetLoaderFlags() const;
		DWORD GetNumberOfRvaAndSizes() const;
		void SetMagic(const WORD);
		void SetMajorLinkerVersion(const BYTE);
		void SetMinorLinkerVersion(const BYTE);
		void SetSizeOfCode(const DWORD);
		void SetSizeOfInitializedData(const DWORD);
		void SetSizeOfUninitializedData(const DWORD);
		void SetAddressOfEntryPoint(const DWORD);
		void SetBaseOfCode(const DWORD);
		void SetImageBase(const ULONGLONG);
		void SetSectionAlignment(const DWORD);
		void SetFileAlignment(const DWORD);
		void SetMajorOperatingSystemVersion(const WORD);
		void SetMinorOperatingSystemVersion(const WORD);
		void SetMajorImageVersion(const WORD);
		void SetMinorImageVersion(const WORD);
		void SetMajorSubsystemVersion(const WORD);
		void SetMinorSubsystemVersion(const WORD);
		void SetWin32VersionValue(const DWORD);
		void SetSizeOfImage(const DWORD);
		void SetSizeOfHeaders(const DWORD);
		void SetCheckSum(const DWORD);
		void SetSubsystem(const WORD);
		void SetDllCharacteristics(const WORD);
		void SetSizeOfStackReserve(const ULONGLONG);
		void SetSizeOfStackCommit(const ULONGLONG);
		void SetSizeOfHeapReserve(const ULONGLONG);
		void SetSizeOfHeapCommit(const ULONGLONG);
		void SetLoaderFlags(const DWORD);
		void SetNumberOfRvaAndSizes(const DWORD);
		bool IsDllInitFunctionCalledOnProccessInit() const;
		bool IsDllInitFunctionCalledOnProccessTerm() const;
		bool IsDllInitFunctionCalledOnThreadInit() const;
		bool IsDllInitFunctionCalledOnThreadTerm() const;
		bool IsHighEntropyVaSet() const;
		bool IsValid() const override final;
	private:
		NtHeaders* nt_headers_;
		PIMAGE_OPTIONAL_HEADER image_optional_header_;
	};
}

#endif