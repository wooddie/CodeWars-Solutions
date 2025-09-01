#include <string>
#include <cassert>
#include <iostream>

std::string solve(std::string s, int a, int b)
{
    int n = s.size();
    b = std::min(b, n - 1);
    
    std::string first = s.substr(0, a);
    std::string second = s.substr(a, b - a + 1);
    std::string third = s.substr(b + 1);

    std::reverse(second.begin(), second.end());

    std::string result = first + second + third;

    return result;
}

int main()
{
    assert(solve("codewars", 1, 5) == ("cawedors"));
    assert(solve("codingIsFun", 2, 100) == ("conuFsIgnid"));
    assert(solve("FunctionalProgramming", 2, 15) == ("FuargorPlanoitcnmming"));
    assert(solve("abcefghijklmnopqrstuvwxyz", 0, 20) == ("vutsrqponmlkjihgfecbawxyz"));
    assert(solve("abcefghijklmnopqrstuvwxyz", 5, 20) == ("abcefvutsrqponmlkjihgwxyz"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// In this Kata, you will be given a string and two indexes (a and b).
// Your task is to reverse the portion of that string between those two indices inclusive.

// str = "codewars", a = 1, b = 5 --> "cawedors"
// str = "cODEWArs", a = 1, b = 5 --> "cAWEDOrs"
// Input will be lowercase and uppercase letters only.

// The first index a will always be smaller than the string length;
// the second index b can be greater than the string length. More examples in the test cases. Good luck!

// Please also try:

// Simple time difference
// https://www.codewars.com/kata/5b76a34ff71e5de9db0000f2

// Simple remove duplicates
// https://www.codewars.com/kata/5ba38ba180824a86850000f7