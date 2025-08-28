#include <vector>
#include <climits>
#include <cstddef>
#include <iostream>
#include <cassert>
#include <sstream>

std::string sum_strings(const std::string &a, const std::string &b)
{
    std::string num1, num2;
    for (char ch : a)
        if (isdigit(ch)) num1 += ch;
    for (char ch : b)
        if (isdigit(ch)) num2 += ch;

    num1.erase(0, num1.find_first_not_of('0'));
    num2.erase(0, num2.find_first_not_of('0'));
    if (num1.empty()) num1 = "0";
    if (num2.empty()) num2 = "0";

    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    std::string result;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.insert(result.begin(), (sum % 10) + '0');
    }

    result.erase(0, result.find_first_not_of('0'));
    if (result.empty()) result = "0";

    return result;
}

int main()
{
    assert(sum_strings("123", "456") == ("579"));
    std::cout << "all tests passed!" << std::endl;

    return 0;
}