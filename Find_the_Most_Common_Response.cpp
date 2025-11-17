#include <iostream>
#include <vector>

class Solution
{
public:
    std::string findCommonResponse(std::vector<std::vector<std::string>> &responses)
    {
        for (auto &vec : responses)
        {
            std::sort(vec.begin(), vec.end());

            auto it = std::unique(vec.begin(), vec.end());

            vec.erase(it, vec.end());
        }

        std::unordered_map<std::string, int> list;

        for (const auto &vec : responses)
        {
            for (const auto &str : vec)
            {
                list[str]++;
            }
        }

        auto it = std::max_element(list.begin(), list.end(),
                                   [](const auto &a, const auto &b)
                                   {
                                       if (a.second != b.second)
                                           return a.second < b.second;
                                       return a.first > b.first;
                                   });

        return it->first;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<std::string>> v = {{"good", "ok", "good", "ok"}, {"ok", "bad", "good", "ok", "ok"}, {"good"}, {"bad"}};
    std::cout << s1.findCommonResponse(v) << std::endl;

    v = {{"good", "ok", "good"}, {"ok", "bad"}, {"bad", "notsure"}, {"great", "good"}};
    std::cout << s1.findCommonResponse(v) << std::endl;

    return 0;
}