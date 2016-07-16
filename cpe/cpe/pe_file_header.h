#ifndef PE_FILE_HEADER_H
#define PE_FILE_HEADER_H

namespace cpe
{
	template <typename T>
	class PeFileHeader
	{
	public:
		PeFileHeader();
		virtual ~PeFileHeader();
		virtual bool IsValid() const = 0;
		virtual size_t GetHeaderSize() const;
	};
}

#endif