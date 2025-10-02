#include <iostream>
#include <vector>
#include <queue>

class Solution
{
public:
    int lastStoneWeight(std::vector<int> &stones)
    {
        std::priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1)
        {
            int max1 = pq.top();
            pq.pop();
            int max2 = pq.top();
            pq.pop();

            if (max1 != max2)
            {
                pq.push(max1 - max2);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 7, 4, 1, 8, 1};
    std::cout << s1.lastStoneWeight(v) << std::endl;

    v = {1};
    std::cout << s1.lastStoneWeight(v) << std::endl;

    return 0;
}