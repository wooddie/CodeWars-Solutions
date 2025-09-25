#include <iostream>
#include <vector>

class Solution
{
public:
    bool threeConsecutiveOdds(std::vector<int> &arr)
    {
        int count = 0;

        for(auto n : arr)
        {
            if (n % 2 != 0)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
            else
            {
                count = 0;
            }
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 6, 4, 1};
    std::cout << std::boolalpha << s1.threeConsecutiveOdds(v) << std::endl; //* false

    v = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    std::cout << std::boolalpha << s1.threeConsecutiveOdds(v) << std::endl; //* true

    return 0;
}