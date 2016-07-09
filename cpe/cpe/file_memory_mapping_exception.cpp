#include "stdafx.h"
#include "file_memory_mapping_exception.h"

namespace cpe
{
	namespace exceptions
	{
		std::ostringstream FileMemoryMappingException::message_stream_;

		FileMemoryMappingException::FileMemoryMappingException(const std::string& message, const DWORD error)
			: std::runtime_error(message), error_{ error }
		{
		}

		const char* FileMemoryMappingException::what() const noexcept
		{
			FileMemoryMappingException::message_stream_.str("");
			FileMemoryMappingException::message_stream_ << std::runtime_error::what() << " (" << error_ << ")" << std::endl;
			return FileMemoryMappingException::message_stream_.str().c_str();
		}
	}
}
