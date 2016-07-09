#ifndef FILE_MEMORY_MAPPING_EXCEPTION_H
#define FILE_MEMORY_MAPPING_EXCEPTION_H

#include <stdexcept>
#include <sstream>

namespace cpe
{
	namespace exceptions
	{
		class FileMemoryMappingException :
			public std::runtime_error
		{
		public:
			FileMemoryMappingException(const std::string&, const DWORD error);
			virtual const char* what() const noexcept override;
		private:
			DWORD error_;
			static std::ostringstream message_stream_;
		};
	}
}

#endif