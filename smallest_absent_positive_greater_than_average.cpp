#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>

class Solution
{
public:
    int smallestAbsent(std::vector<int> &nums)
    {
        std::unordered_set<int> list(nums.begin(), nums.end());
        long long sum = 0;
        int maxVal = 0;

        for (int x : nums)
        {
            sum += x;
            maxVal = std::max(maxVal, x);
        }

        double avg = (double)sum / nums.size();

        long long start = std::max((long long)1, (long long)(avg + 1));

        while (start <= (long long)maxVal + nums.size() + 5)
        {
            if (!list.contains((int)start))
            {
                return start;
            }

            start++;
        }

        return maxVal + 1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 5};
    std::cout << s1.smallestAbsent(v) << std::endl;

    v = {-1, 1, 2};
    std::cout << s1.smallestAbsent(v) << std::endl;

    v = {4, -1};
    std::cout << s1.smallestAbsent(v) << std::endl;

    return 0;
}