#include <iostream>

class Solution
{
public:
    int integerReplacement(int n)
    {
        long long num = n; // ← Копия в более широкий тип
        int count = 0;

        while (num > 1)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                if (num == 3 || num % 4 == 1)
                    num -= 1;
                else
                    num += 1;
            }
            count++;
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.integerReplacement(8) << std::endl;
    std::cout << s1.integerReplacement(7) << std::endl;
    std::cout << s1.integerReplacement(4) << std::endl;

    return 0;
}