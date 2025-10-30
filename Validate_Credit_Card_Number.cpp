#include <iostream>
#include <cassert>
#include <vector>

class Kata
{
public:
    static bool validate(long long int n)
    {
        int count = 1;
        std::vector<int> list;

        while (n > 0)
        {
            int digit = n % 10;
            int sum = 0;
            n /= 10;

            if (count % 2 == 0)
            {
                sum = digit + digit;

                if (sum > 9)
                {
                    sum -= 9;

                    list.push_back(sum);
                }
                else
                {
                    list.push_back(sum);
                }
            }
            else
            {
                list.push_back(digit);
            }

            count++;
        }

        int digits_sum = 0;

        for (int n : list)
        {
            digits_sum += n;
        }

        return (digits_sum % 10 == 0) ? true : false;
    }
};

int main()
{
    assert(Kata::validate(891) == (false));
    assert(Kata::validate(2121) == (true));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}