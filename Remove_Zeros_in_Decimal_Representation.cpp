#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    long long removeZeros(long long n)
    {
        std::string result = std::to_string(n);

        result.erase(std::remove(result.begin(), result.end(), '0'), result.end());

        return std::stoll(result);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.removeZeros(1020030) << std::endl;
    std::cout << s1.removeZeros(1) << std::endl;

    return 0;
}