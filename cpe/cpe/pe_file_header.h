#ifndef PE_FILE_HEADER_H
#define PE_FILE_HEADER_H

namespace cpe
{
	class pe_file_header
	{
	public:
		pe_file_header();
		virtual ~pe_file_header();
		virtual bool isValid() const = 0;
	};
}

#endif