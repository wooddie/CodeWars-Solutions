#include <iostream>
#include <vector>

class Solution
{
private:
    int solve(int n, std::vector<int> &memo)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        if (memo[n] != -1)
            return memo[n];

        return memo[n] = (solve(n - 1, memo) + solve(n - 2, memo));
    }

public:
    int climbStairs(int n)
    {
        std::vector<int> memory(n + 1, -1);
        return solve(n, memory);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.climbStairs(2) << std::endl;
    std::cout << s1.climbStairs(3) << std::endl;

    return 0;
}