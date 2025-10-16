#include <iostream>
#include <string>
#include <unordered_set>

class Solution
{
public:
    int numJewelsInStones(std::string jewels, std::string stones)
    {
        int count = 0;
        std::unordered_set<char> set_char(jewels.begin(), jewels.end());

        for (char c : stones)
        {
            if (set_char.contains(c))
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.numJewelsInStones("aA", "aAAbbbb") << std::endl;
    std::cout << s1.numJewelsInStones("z", "ZZ") << std::endl;

    return 0;
}