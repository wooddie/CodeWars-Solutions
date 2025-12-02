#include <iostream>
#include <vector>

class Solution
{
public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s)
    {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int i = 0;
        int j = 0;

        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
            {
                i++;
            }

            j++;
        }

        return i;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {1, 1};
    std::cout << s1.findContentChildren(v1, v2) << std::endl;

    v1 = {1, 2};
    v2 = {1, 2, 3};
    std::cout << s1.findContentChildren(v1, v2) << std::endl;

    return 0;
}