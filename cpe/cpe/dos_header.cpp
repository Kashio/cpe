#include "stdafx.h"
#include "dos_header.h"
#include <stdexcept>

namespace cpe
{
	DosHeader::DosHeader(const LPVOID file_base)
		: image_dos_header_{ reinterpret_cast<PIMAGE_DOS_HEADER>(file_base) }
	{
	}

	WORD DosHeader::GetMagicNumber() const
	{
		return image_dos_header_->e_magic;
	}

	WORD DosHeader::GetNumberOfBytesOnLastPage() const
	{
		return image_dos_header_->e_cblp;
	}

	WORD DosHeader::GetNumberOfPages() const
	{
		return image_dos_header_->e_cp;
	}

	WORD DosHeader::GetRelocations() const
	{
		return image_dos_header_->e_crlc;
	}

	WORD DosHeader::GetSizeOfHeaderInParagraphs() const
	{
		return image_dos_header_->e_cparhdr;
	}

	WORD DosHeader::GetMinParagraphsToAllocate() const
	{
		return image_dos_header_->e_minalloc;
	}

	WORD DosHeader::GetMaxParagraphsToAllocate() const
	{
		return image_dos_header_->e_maxalloc;
	}

	WORD DosHeader::GetInitialSs() const
	{
		return image_dos_header_->e_ss;
	}

	WORD DosHeader::GetInitialSp() const
	{
		return image_dos_header_->e_sp;
	}

	WORD DosHeader::GetChecksum() const
	{
		return image_dos_header_->e_csum;
	}

	WORD DosHeader::GetInitialIp() const
	{
		return image_dos_header_->e_ip;
	}

	WORD DosHeader::GetInitialCs() const
	{
		return image_dos_header_->e_cs;
	}

	WORD DosHeader::GetRvaOfRelocationTable() const
	{
		return image_dos_header_->e_lfarlc;
	}

	WORD DosHeader::GetOverlayNumber() const
	{
		return image_dos_header_->e_ovno;
	}

	WORD DosHeader::GetReserved1(size_t index) const
	{
		if (index < 0 || index > 3)
			throw std::out_of_range("Reserved1 index must be in the range of [0, 3]");
		return image_dos_header_->e_res[index];
	}

	WORD DosHeader::GetOemId() const
	{
		return image_dos_header_->e_oemid;
	}

	WORD DosHeader::GetOemInfo()
	{
		return image_dos_header_->e_oeminfo;
	}

	WORD DosHeader::GetReserved2(size_t index) const
	{
		if (index < 0 || index > 9)
			throw std::out_of_range("Reserved2 index must be in the range of [0, 9]");
		return image_dos_header_->e_res2[index];
	}

	DWORD DosHeader::GetRvaOfNtHeaders() const
	{
		return image_dos_header_->e_lfanew;
	}

	void DosHeader::SetMagicNumber(WORD magic_number)
	{
		image_dos_header_->e_magic = magic_number;
	}

	void DosHeader::SetNumberOfBytesOnLastPage(WORD number_of_bytes_on_last_page)
	{
		image_dos_header_->e_cblp = number_of_bytes_on_last_page;
	}

	void DosHeader::SetNumberOfPages(WORD number_of_pages)
	{
		image_dos_header_->e_cp = number_of_pages;
	}

	void DosHeader::SetRelocations(WORD relocations)
	{
		image_dos_header_->e_crlc = relocations;
	}

	void DosHeader::SetSizeOfHeaderInParagraphs(WORD size_of_header_in_paragraphs)
	{
		image_dos_header_->e_cparhdr = size_of_header_in_paragraphs;
	}

	void DosHeader::SetMinParagraphsToAllocate(WORD min_paragraphs_to_allocate)
	{
		image_dos_header_->e_minalloc = min_paragraphs_to_allocate;
	}

	void DosHeader::SetMaxParagraphsToAllocate(WORD max_paragraphs_to_allocate)
	{
		image_dos_header_->e_maxalloc = max_paragraphs_to_allocate;
	}

	void DosHeader::SetInitialSs(WORD initial_ss)
	{
		image_dos_header_->e_ss = initial_ss;
	}

	void DosHeader::setInitialSp(WORD initial_sp)
	{
		image_dos_header_->e_sp = initial_sp;
	}

	void DosHeader::SetChecksum(WORD checksum)
	{
		image_dos_header_->e_csum = checksum;
	}

	void DosHeader::SetInitialIp(WORD initial_ip)
	{
		image_dos_header_->e_ip = initial_ip;
	}

	void DosHeader::SetInitialCs(WORD initial_cs)
	{
		image_dos_header_->e_cs = initial_cs;
	}

	void DosHeader::SetRvaOfRelocationTable(WORD rva_of_relocation_table)
	{
		image_dos_header_->e_lfarlc = rva_of_relocation_table;
	}

	void DosHeader::SetOverlayNumber(WORD overlay_number)
	{
		image_dos_header_->e_ovno = overlay_number;
	}

	void DosHeader::SetReserved1(size_t index, WORD res)
	{
		if (index < 0 || index > 3)
			throw std::out_of_range("Reserved1 index must be in the range of [0, 3]");
		image_dos_header_->e_res[index] = res;
	}

	void DosHeader::SetOemId(WORD oem_id)
	{
		image_dos_header_->e_oemid = oem_id;
	}

	void DosHeader::SetOemInfo(WORD oem_info)
	{
		image_dos_header_->e_oeminfo = oem_info;
	}

	void DosHeader::SetReserved2(size_t index, WORD res)
	{
		if (index < 0 || index > 9)
			throw std::out_of_range("Reserved2 index must be in the range of [0, 9]");
		image_dos_header_->e_res2[index] = res;
	}

	void DosHeader::SetRvaOfNtHeaders(DWORD rva_of_nt_headers)
	{
		image_dos_header_->e_lfanew = rva_of_nt_headers;
	}

	bool DosHeader::IsValid() const
	{
		return image_dos_header_->e_magic == IMAGE_DOS_SIGNATURE;
	}
}
