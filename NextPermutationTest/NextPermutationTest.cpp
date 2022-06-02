#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <sstream>
#include <string>
#include "next_permutation_function.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NextPermutationTest
{
	TEST_CLASS(NextPermutationTest)
	{
	public:
		std::string vectorToString(const std::vector<int>& vector) {
			
			std::ostringstream s1(std::ostringstream::ate);
			for (std::vector<int>::const_iterator i = vector.cbegin(); i != vector.cend(); i++)
				s1 << (*i) << ' ';
			return s1.str();
		}
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> input;
			input.push_back(1);
			input.push_back(2);
			input.push_back(3);


			std::vector<int> result;
			result.push_back(1);
			result.push_back(3);
			result.push_back(2);
			

			nextPermutation(input);

			std::string str1 = vectorToString(input); 
			std::string str2 = vectorToString(result);
			Assert::AreEqual(str2.c_str(),str1.c_str());
		}
		TEST_METHOD(TestMethod2)
		{
			std::vector<int> input;
			input.push_back(1);
			input.push_back(1);
			input.push_back(5);


			std::vector<int> result;
			result.push_back(1);
			result.push_back(5);
			result.push_back(1);


			nextPermutation(input);

			std::string str1 = vectorToString(input);
			std::string str2 = vectorToString(result);


			Assert::AreEqual(str2.c_str(), str1.c_str());
		}
	};
}
