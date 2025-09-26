#include <iostream>
#include <string>
#include <sstream>

class Solution
{
public:
    std::string multiply(std::string num1, std::string num2)
    {
        std::stringstream ss1(num1);
        long long n1;
        ss1 >> n1;
        std::stringstream ss2(num2);
        long long n2;
        ss2 >> n2;

        return std::to_string(n1 * n2);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.multiply("2", "3") << std::endl;
    std::cout << s1.multiply("123", "456") << std::endl;

    return 0;
}