#include <iostream>
#include <vector>

class Solution
{
public:
    int countMatches(std::vector<std::vector<std::string>> &items, std::string ruleKey, std::string ruleValue)
    {
        int result = 0;

        for (const auto &o : items)
        {
            if (ruleKey == "type")
            {
                if (o[0] == ruleValue)
                {
                    result++;
                }
            }
            else if (ruleKey == "color")
            {
                if (o[1] == ruleValue)
                {
                    result++;
                }
            }
            else if (ruleKey == "name")
            {
                if (o[2] == ruleValue)
                {
                    result++;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<std::string>> v = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "gold", "iphone"}};
    std::cout << s1.countMatches(v, "color", "silver") << std::endl;

    v = {{"phone", "blue", "pixel"}, {"computer", "silver", "phone"}, {"phone", "gold", "iphone"}};
    std::cout << s1.countMatches(v, "type", "phone") << std::endl;

    return 0;
}