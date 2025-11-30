#include <iostream>
#include <vector>

class Solution
{
public:
    int findKthLargest(std::vector<int> &nums, int k)
    {
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

        for (int x : nums)
        {
            pq.push(x);
            if (pq.size() > k)
                pq.pop();
        }

        return pq.top();
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 2, 1, 5, 6, 4};
    std::cout << s1.findKthLargest(v, 2) << std::endl;
    v = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    std::cout << s1.findKthLargest(v, 4) << std::endl;

    return 0;
}