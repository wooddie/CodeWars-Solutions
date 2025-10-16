#include <iostream>
#include <string>

class Solution
{
public:
    std::string convertDateToBinary(std::string date)
    {
        std::string result;
        std::string word;

        for (char c : date)
        {
            if (isdigit(c))
            {
                word += c;
            }
            else
            {
                if (!word.empty())
                {
                    int set = std::stoi(word);
                    word = std::bitset<16>(set).to_string();
                    size_t pos = word.find('1');

                    if (pos != std::string::npos)
                    {
                        word.erase(0, pos);
                    }
                    else
                    {
                        word = '0';
                    }

                    result += word + '-';

                    word.clear();
                }
            }
        }

        if (!word.empty())
        {
            int set = std::stoi(word);
            word = std::bitset<16>(set).to_string();
            size_t pos = word.find('1');

            if (pos != std::string::npos)
            {
                word.erase(0, pos);
            }
            else
            {
                word = '0';
            }

            result += word + '-';

            word.clear();
        }

        result.pop_back();

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.convertDateToBinary("2080-02-29") << std::endl;
    std::cout << s1.convertDateToBinary("1900-01-01") << std::endl;

    return 0;
}