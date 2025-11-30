#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_map>

class Solution
{
public:
    int minSubarray(std::vector<int> &nums, int p)
    {
        long long sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        long long r = sum % p;

        if (r == 0)
        {
            return 0;
        }

        long long prefix = 0;
        std::unordered_map<long long, long long> hash;
        hash[0] = -1;
        long long n = nums.size();
        long long min_len = n + 1;

        for (long long i = 0; i < n; ++i)
        {
            prefix = (prefix + nums[i]) % p;
            long long target = (prefix - r + p) % p;

            if (hash.contains(target))
            {
                min_len = std::min(min_len, i - hash[target]);
            }

            hash[prefix] = i;
        }

        return (min_len == n + 1 || min_len == n) ? -1 : min_len;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 1, 4, 2};
    std::cout << s1.minSubarray(v, 6) << std::endl;
    v = {6, 3, 5, 2};
    std::cout << s1.minSubarray(v, 9) << std::endl;
    v = {1, 2, 3};
    std::cout << s1.minSubarray(v, 3) << std::endl;

    return 0;
}