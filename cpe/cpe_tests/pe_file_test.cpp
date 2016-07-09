#include "stdafx.h"
#include "CppUnitTest.h"
#include "../cpe/pe_file.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CpeTests
{		
	TEST_CLASS(PeFileTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			cpe::PeFile pefile(L"ssdsd");
		}
	};
}