#include <iostream>
#include <cassert>
#include <string>

std::string autoMorphic(int number)
{
	// Your Code here .. Enjoy !!
	return "Your Result Here";
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