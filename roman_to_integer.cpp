#include <iostream>
#include <iostream>
#include <map>

class Solution
{
public:
    int romanToInt(std::string s)
    {
        std::unordered_map<char, int> list = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int result = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'I' && s[i + 1] == 'V')
            {
                result += 4;
                i++;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                result += 9;
                i++;
            }
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                result += 40;
                i++;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                result += 90;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                result += 400;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                result += 900;
                i++;
            }
            else
            {
                result += list[s[i]];
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.romanToInt("III") << std::endl;
    std::cout << s1.romanToInt("LVIII") << std::endl;
    std::cout << s1.romanToInt("MCMXCIV") << std::endl;

    return 0;
}