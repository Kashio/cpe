#ifndef DOS_HEADER_H
#define DOS_HEADER_H

#include "pe_file_header.h"

namespace cpe
{
	class CPE_API DosHeader : public PeFileHeader<DosHeader>
	{
	public:
		DosHeader(const LPVOID file_base);
		WORD GetMagicNumber() const;
		WORD GetNumberOfBytesOnLastPage() const;
		WORD GetNumberOfPages() const;
		WORD GetRelocations() const;
		WORD GetSizeOfHeaderInParagraphs() const;
		WORD GetMinParagraphsToAllocate() const;
		WORD GetMaxParagraphsToAllocate() const;
		WORD GetInitialSs() const;
		WORD GetInitialSp() const;
		WORD GetChecksum() const;
		WORD GetInitialIp() const;
		WORD GetInitialCs() const;
		WORD GetRvaOfRelocationTable() const;
		WORD GetOverlayNumber() const;
		WORD GetReserved1(const size_t) const;
		WORD GetOemId() const;
		WORD GetOemInfo();
		WORD GetReserved2(const size_t) const;
		DWORD GetRvaOfNtHeaders() const;
		void SetMagicNumber(const WORD);
		void SetNumberOfBytesOnLastPage(const WORD);
		void SetNumberOfPages(const WORD);
		void SetRelocations(const WORD);
		void SetSizeOfHeaderInParagraphs(const WORD);
		void SetMinParagraphsToAllocate(const WORD);
		void SetMaxParagraphsToAllocate(const WORD);
		void SetInitialSs(const WORD);
		void setInitialSp(const WORD);
		void SetChecksum(const WORD);
		void SetInitialIp(const WORD);
		void SetInitialCs(const WORD);
		void SetRvaOfRelocationTable(const WORD);
		void SetOverlayNumber(const WORD);
		void SetReserved1(const size_t, const WORD);
		void SetOemId(const WORD);
		void SetOemInfo(const WORD);
		void SetReserved2(const size_t, const WORD);
		void SetRvaOfNtHeaders(const DWORD);
		bool IsValid() const override final;
	private:
		PIMAGE_DOS_HEADER image_dos_header_;
	};
}

#endif
