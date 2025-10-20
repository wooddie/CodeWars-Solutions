#include <iostream>

class Solution
{
public:
    int smallestNumber(int n)
    {
        while (true)
        {
            if((n & (n + 1)) == 0)
            {
                return n;
            }

            n++;
        }
        
        return -1;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.smallestNumber(5) << std::endl;
    std::cout << s1.smallestNumber(10) << std::endl;
    std::cout << s1.smallestNumber(3) << std::endl;

    return 0;
}