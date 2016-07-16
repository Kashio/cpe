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
		WORD GetReserved1(size_t) const;
		WORD GetOemId() const;
		WORD GetOemInfo();
		WORD GetReserved2(size_t) const;
		DWORD GetRvaOfNtHeaders() const;
		void SetMagicNumber(WORD);
		void SetNumberOfBytesOnLastPage(WORD);
		void SetNumberOfPages(WORD);
		void SetRelocations(WORD);
		void SetSizeOfHeaderInParagraphs(WORD);
		void SetMinParagraphsToAllocate(WORD);
		void SetMaxParagraphsToAllocate(WORD);
		void SetInitialSs(WORD);
		void setInitialSp(WORD);
		void SetChecksum(WORD);
		void SetInitialIp(WORD);
		void SetInitialCs(WORD);
		void SetRvaOfRelocationTable(WORD);
		void SetOverlayNumber(WORD);
		void SetReserved1(size_t, WORD);
		void SetOemId(WORD);
		void SetOemInfo(WORD);
		void SetReserved2(size_t, WORD);
		void SetRvaOfNtHeaders(DWORD);
		bool IsValid() const override final;
	private:
		PIMAGE_DOS_HEADER image_dos_header_;
	};
}

#endif
