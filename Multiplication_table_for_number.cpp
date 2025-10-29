#include <iostream>
#include <cassert>
#include <string>

std::string multi_table(int number)
{
    std::string result;

    for (int i = 1; i <= 10; ++i)
    {
        int mult = i * number;
        result += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(mult) + "\n";
    }

    result.pop_back();

    return result;
}

void do_test(int number, const std::string &expected)
{
    assert(multi_table(number) == (expected));
}

int main()
{
    std::string multi_table(int number);

    do_test(5, "1 * 5 = 5\n2 * 5 = 10\n3 * 5 = 15\n4 * 5 = 20\n5 * 5 = 25\n6 * 5 = 30\n7 * 5 = 35\n8 * 5 = 40\n9 * 5 = 45\n10 * 5 = 50");
    do_test(1, "1 * 1 = 1\n2 * 1 = 2\n3 * 1 = 3\n4 * 1 = 4\n5 * 1 = 5\n6 * 1 = 6\n7 * 1 = 7\n8 * 1 = 8\n9 * 1 = 9\n10 * 1 = 10");

    std::cout << "all tests passed!" << std::endl;

    return 0;
}