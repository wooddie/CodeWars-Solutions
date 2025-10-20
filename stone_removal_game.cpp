#include <iostream>

class Solution
{
public:
    bool canAliceWin(int n)
    {
        int alice = 0;
        int bob = 0;

        std::vector<int> alice_moves = {10, 8, 6, 4, 2};
        std::vector<int> bob_moves = {9, 7, 5, 3, 1};

        for (int i = 0; i < 10; ++i)
        {
            if (i % 2 == 0)
            {
                if (n >= alice_moves[alice])
                {
                    n -= alice_moves[alice];
                    alice++;
                }
            }
            else if (i % 2 != 0)
            {
                if (n >= bob_moves[bob])
                {
                    n -= bob_moves[bob];
                    bob++;
                }
            }

            if (alice >= 5 || bob >= 5)
            {
                break;
            }
        }

        return (alice > bob) ? true : false;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.canAliceWin(12) << std::endl;
    std::cout << std::boolalpha << s1.canAliceWin(1) << std::endl;

    return 0;
}