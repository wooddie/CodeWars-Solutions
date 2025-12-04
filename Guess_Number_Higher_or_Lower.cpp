#include <iostream>

int pick = 0;

int guess(int num)
{
    if (num > pick)
    {
        return -1;
    }
    else if (num < pick)
    {
        return 1;
    }

    return 0;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1;
        int right = n;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int res = guess(mid);

            if (res == 0)
            {
                return mid;
            }
            else if (res == -1)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return 0;
    }
};

int main()
{
    Solution s1;

    pick = 6;
    std::cout << s1.guessNumber(10) << std::endl;

    return 0;
}