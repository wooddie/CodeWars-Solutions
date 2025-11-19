#include <iostream>
#include <algorithm>

class Solution
{
public:
    int nthUglyNumber(int n)
    {
        std::vector<int> ugly = {1};
        int p2 = 0, p3 = 0, p5 = 0;

        while (ugly.size() < n)
        {
            int con2 = ugly[p2] * 2;
            int con3 = ugly[p3] * 3;
            int con5 = ugly[p5] * 5;

            int nextUgly = std::min(con2, std::min(con3, con5));

            ugly.push_back(nextUgly);

            if (nextUgly == con2)
                p2++;
            if (nextUgly == con3)
                p3++;
            if (nextUgly == con5)
                p5++;
        }

        return ugly[ugly.size() - 1];
    }
};

int main()
{
    Solution s1;

    std::cout << s1.nthUglyNumber(10) << std::endl;
    std::cout << s1.nthUglyNumber(1) << std::endl;

    return 0;
}