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
			PeFile pefile;
			Assert::AreEqual(pefile, pefile);
		}
	};
}