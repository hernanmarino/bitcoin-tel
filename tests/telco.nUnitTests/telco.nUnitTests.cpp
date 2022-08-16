#include "CppUnitTest.h"
#include "iostream"
#include "../../src/customer.h"


susing namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace telconUnitTests
{
	TEST_CLASS(telconUnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string name = "Bill";
			Customer customer(name);
			Assert::AreEqual(name, mc.GetName());
		}
	};
}
