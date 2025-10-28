#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::string> fizzBuzz(int n)
    {
        std::vector<std::string> result;

        for (int i = 1; i <= n; ++i)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                result.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                result.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                result.push_back("Buzz");
            }
            else
            {
                result.push_back(std::to_string(i));
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    for (const auto &a : s1.fizzBuzz(3))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    for (const auto &a : s1.fizzBuzz(5))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    for (const auto &a : s1.fizzBuzz(15))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}