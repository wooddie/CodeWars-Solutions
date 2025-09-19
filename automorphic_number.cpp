#include <iostream>
#include <cassert>
#include <string>

std::string autoMorphic(int number)
{
	long long num_square = static_cast<long long>(number) * number;
	std::string str_number = std::to_string(number);
	std::string str_square = std::to_string(num_square);

	if (str_square.length() >= str_number.length())
	{
		std::string suffix = str_square.substr(str_square.length() - str_number.length());
		if (suffix == str_number)
		{
			return "Automorphic";
		}
	}
	return "Not!!";
}

int main()
{
	//* One_Digit_Number
	assert(autoMorphic(1) == ("Automorphic"));
	assert(autoMorphic(3) == ("Not!!"));
	assert(autoMorphic(6) == ("Automorphic"));
	assert(autoMorphic(9) == ("Not!!"));

	//* Two_Digit_Number
	assert(autoMorphic(25) == ("Automorphic"));
	assert(autoMorphic(13) == ("Not!!"));
	assert(autoMorphic(76) == ("Automorphic"));
	assert(autoMorphic(95) == ("Not!!"));

	//* Larger_Number
	assert(autoMorphic(625) == ("Automorphic"));
	assert(autoMorphic(225) == ("Not!!"));
	assert(autoMorphic(425) == ("Not!!"));
	assert(autoMorphic(399) == ("Not!!"));
	assert(autoMorphic(100) == ("Not!!"));

	std::cout << "all tests passed!" << std::endl;

	return 0;
}