#include "stdafx.h"
#include "dos_header.h"
#include <stdexcept>

namespace cpe
{
	DosHeader::DosHeader(const LPVOID file_base)
		: image_dos_header_{ *reinterpret_cast<PIMAGE_DOS_HEADER>(file_base) }
	{
	}

	WORD DosHeader::GetMagicNumber() const
	{
		return image_dos_header_.e_magic;
	}

	WORD DosHeader::GetNumberOfBytesOnLastPage() const
	{
		return image_dos_header_.e_cblp;
	}

	WORD DosHeader::GetNumberOfPages() const
	{
		return image_dos_header_.e_cp;
	}

	WORD DosHeader::GetRelocations() const
	{
		return image_dos_header_.e_crlc;
	}

	WORD DosHeader::GetSizeOfHeaderInParagraphs() const
	{
		return image_dos_header_.e_cparhdr;
	}

	WORD DosHeader::GetMinParagraphsToAllocate() const
	{
		return image_dos_header_.e_minalloc;
	}

	WORD DosHeader::GetMaxParagraphsToAllocate() const
	{
		return image_dos_header_.e_maxalloc;
	}

	WORD DosHeader::GetInitialSs() const
	{
		return image_dos_header_.e_ss;
	}

	WORD DosHeader::GetInitialSp() const
	{
		return image_dos_header_.e_sp;
	}

	WORD DosHeader::GetChecksum() const
	{
		return image_dos_header_.e_csum;
	}

	WORD DosHeader::GetInitialIp() const
	{
		return image_dos_header_.e_ip;
	}

	WORD DosHeader::GetInitialCs() const
	{
		return image_dos_header_.e_cs;
	}

	WORD DosHeader::GetRvaOfRelocationTable() const
	{
		return image_dos_header_.e_lfarlc;
	}

	WORD DosHeader::GetOverlayNumber() const
	{
		return image_dos_header_.e_ovno;
	}

	WORD DosHeader::GetReserved1(size_t index) const
	{
		if (index < 0 || index > 3)
			throw std::out_of_range("Reserved1 index must be in the range of [0, 3]");
		return image_dos_header_.e_res[index];
	}

	WORD DosHeader::GetOemId() const
	{
		return image_dos_header_.e_oemid;
	}

	WORD DosHeader::GetOemInfo()
	{
		return image_dos_header_.e_oeminfo;
	}

	WORD DosHeader::GetReserved2(size_t index) const
	{
		if (index < 0 || index > 9)
			throw std::out_of_range("Reserved2 index must be in the range of [0, 9]");
		return image_dos_header_.e_res2[index];
	}

	DWORD DosHeader::GetRvaOfNtHeaders() const
	{
		return image_dos_header_.e_lfanew;
	}

	void DosHeader::SetMagicNumber(WORD magicNumber)
	{
		image_dos_header_.e_magic = magicNumber;
	}

	void DosHeader::SetNumberOfBytesOnLastPage(WORD numberOfBytesOnLastPage)
	{
		image_dos_header_.e_cblp = numberOfBytesOnLastPage;
	}

	void DosHeader::SetNumberOfPages(WORD numberOfPages)
	{
		image_dos_header_.e_cp = numberOfPages;
	}

	void DosHeader::SetRelocations(WORD relocations)
	{
		image_dos_header_.e_crlc = relocations;
	}

	void DosHeader::SetSizeOfHeaderInParagraphs(WORD sizeOfHeaderInParagraphs)
	{
		image_dos_header_.e_cparhdr = sizeOfHeaderInParagraphs;
	}

	void DosHeader::SetMinParagraphsToAllocate(WORD minParagraphsToAllocate)
	{
		image_dos_header_.e_minalloc = minParagraphsToAllocate;
	}

	void DosHeader::SetMaxParagraphsToAllocate(WORD maxParagraphsToAllocate)
	{
		image_dos_header_.e_maxalloc = maxParagraphsToAllocate;
	}

	void DosHeader::SetInitialSs(WORD initialSs)
	{
		image_dos_header_.e_ss = initialSs;
	}

	void DosHeader::setInitialSp(WORD initialSp)
	{
		image_dos_header_.e_sp = initialSp;
	}

	void DosHeader::SetChecksum(WORD checksum)
	{
		image_dos_header_.e_csum = checksum;
	}

	void DosHeader::SetInitialIp(WORD initialIp)
	{
		image_dos_header_.e_ip = initialIp;
	}

	void DosHeader::SetInitialCs(WORD initialCs)
	{
		image_dos_header_.e_cs = initialCs;
	}

	void DosHeader::SetRvaOfRelocationTable(WORD rvaOfRelocationTable)
	{
		image_dos_header_.e_lfarlc = rvaOfRelocationTable;
	}

	void DosHeader::SetOverlayNumber(WORD overlayNumber)
	{
		image_dos_header_.e_ovno = overlayNumber;
	}

	void DosHeader::SetReserved1(size_t index, WORD res)
	{
		if (index < 0 || index > 3)
			throw std::out_of_range("Reserved1 index must be in the range of [0, 3]");
		image_dos_header_.e_res[index] = res;
	}

	void DosHeader::SetOemId(WORD oemId)
	{
		image_dos_header_.e_oemid = oemId;
	}

	void DosHeader::SetOemInfo(WORD oemInfo)
	{
		image_dos_header_.e_oeminfo = oemInfo;
	}

	void DosHeader::SetReserved2(size_t index, WORD res)
	{
		if (index < 0 || index > 9)
			throw std::out_of_range("Reserved2 index must be in the range of [0, 9]");
		image_dos_header_.e_res2[index] = res;
	}

	void DosHeader::SetRvaOfNtHeaders(DWORD rvaOfNtHeaders)
	{
		image_dos_header_.e_lfanew = rvaOfNtHeaders;
	}

	bool DosHeader::IsValid() const
	{
		return image_dos_header_.e_magic == IMAGE_DOS_SIGNATURE;
	}
}
