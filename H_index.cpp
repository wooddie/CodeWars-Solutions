#include <iostream>
#include <vector>

class Solution
{
public:
    int hIndex(std::vector<int> &citations)
    {
        std::sort(citations.begin(), citations.end());
        int s = citations.size();

        for (int i = 0; i < s; ++i)
        {
            int h = s - i;

            if (citations[i] >= h)
            {
                return h;
            }
        }

        return 0;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 0, 6, 1, 5};
    std::cout << s1.hIndex(v) << std::endl;

    v = {1, 3, 1};
    std::cout << s1.hIndex(v) << std::endl;

    return 0;
}