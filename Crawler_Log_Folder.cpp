#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    int minOperations(std::vector<std::string> &logs)
    {
        int count = 0;
        for (const auto &s : logs)
        {
            if (s != "../" && s != "./")
            {
                count++;
            }
            else if (s == "../")
            {
                if (count > 0)
                {
                    count--;
                }
                else
                {
                    count = 0;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"d1/", "d2/", "../", "d21/", "./"};
    std::cout << s1.minOperations(v) << std::endl;

    v = {"d1/", "d2/", "./", "d3/", "../", "d31/"};
    std::cout << s1.minOperations(v) << std::endl;

    v = {"d1/", "../", "../", "../"};
    std::cout << s1.minOperations(v) << std::endl;

    return 0;
}