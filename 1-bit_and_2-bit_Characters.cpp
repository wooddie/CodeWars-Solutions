#include <iostream>
#include <vector>

class Solution
{
public:
    bool isOneBitCharacter(std::vector<int> &bits)
    {
        int count = 0;

        for (int i = bits.size() - 2; i >= 0; --i)
        {
            if (bits[i] == 1)
                count++;
            else
                break;
        }

        return (count % 2 == 0) ? true : false;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 0, 0};
    std::cout << std::boolalpha << s1.isOneBitCharacter(v) << std::endl;

    v = {1, 1, 1, 0};
    std::cout << std::boolalpha << s1.isOneBitCharacter(v) << std::endl;

    return 0;
}