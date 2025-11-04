#include <iostream>
#include <unordered_map>
#include <string>

class Solution
{
public:
    std::string frequencySort(std::string s)
    {
        std::string result;
        std::unordered_map<char, int> list;
        std::vector<std::pair<char, int>> vec;

        for (const auto &c : s)
        {
            list[c]++;
        }

        for (auto const &[key, val] : list)
        {
            vec.push_back({key, val});
        }

        std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
                  { return a.second > b.second; });

        for (const auto &pair : vec)
        {
            int step = pair.second;
            while (step > 0)
            {
                result += pair.first;
                step--;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.frequencySort("tree") << std::endl;
    std::cout << s1.frequencySort("cccaaa") << std::endl;
    std::cout << s1.frequencySort("Aabb") << std::endl;

    return 0;
}