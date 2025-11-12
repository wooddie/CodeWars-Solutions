#include <iostream>
#include <string>
#include <unordered_map>

class Solution
{
public:
    int maxIt(const std::unordered_map<char, int> &list)
    {
        if (list.empty())
        {
            return 0;
        }

        auto maxElement = std::max_element(
            list.begin(), list.end(),
            [](const auto &a, const auto &b)
            {
                return a.second < b.second;
            });

        return maxElement->second;
    }

    int maxFreqSum(std::string s)
    {
        std::unordered_map<char, int> vowel;
        std::unordered_map<char, int> consonant;

        for (const auto &c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel[c]++;
            }
            else
            {
                consonant[c]++;
            }
        }

        int vowelsMax = maxIt(vowel);
        int consonantMax = maxIt(consonant);

        return vowelsMax + consonantMax;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.maxFreqSum("successes") << std::endl;
    std::cout << s1.maxFreqSum("aeiaeia") << std::endl;

    return 0;
}