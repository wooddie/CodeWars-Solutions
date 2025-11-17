#include <iostream>
#include <vector>

class Solution
{
public:
    bool kLengthApart(std::vector<int> &nums, int k)
    {
        int count = 0;
        bool started = false;

        for (int i = 0; i < nums.size(); ++i)
        {

            if (!started)
            {
                if (nums[i] == 1)
                {
                    started = true;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if (nums[i] == 1 && i > 0)
                {
                    if (count < k)
                    {
                        return false;
                    }
                    else
                    {
                        count = 0;
                    }
                }

                if (nums[i] == 0)
                {
                    count++;
                }
            }
        }

        return true;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 0, 0, 0, 1, 0, 0, 1};
    std::cout << std::boolalpha << s1.kLengthApart(v, 2) << std::endl;

    v = {1, 0, 0, 1, 0, 1};
    std::cout << std::boolalpha << s1.kLengthApart(v, 2) << std::endl;

    return 0;
}