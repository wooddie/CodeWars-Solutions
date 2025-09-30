#include <iostream>

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
        {
            return 0;
        }

        std::vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; ++i)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (bool p : isPrime)
        {
            if (p)
            {
                ++count;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.countPrimes(10) << std::endl;
    std::cout << s1.countPrimes(0) << std::endl;
    std::cout << s1.countPrimes(1) << std::endl;

    return 0;
}