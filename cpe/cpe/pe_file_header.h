#ifndef PE_FILE_HEADER_H
#define PE_FILE_HEADER_H

namespace cpe
{
	template <typename T>
	class pe_file_header
	{
	public:
		pe_file_header();
		virtual ~pe_file_header();
		virtual bool IsValid() const = 0;
		size_t GetHeaderSize() const;
	};
}

#endif