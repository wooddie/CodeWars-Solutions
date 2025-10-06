#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<double> convertTemperature(double celsius)
    {
        return {(celsius + 273.15), (celsius * 1.80 + 32.00)};
    }
};

int main()
{
    Solution s1;

    for (const auto &d : s1.convertTemperature(36.50))
    {
        std::cout << d;
    }
    std::cout << std::endl;

    for (const auto &d : s1.convertTemperature(122.11))
    {
        std::cout << d;
    }
    std::cout << std::endl;

    return 0;
}