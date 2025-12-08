#include <iostream>
#include <cassert>

int dontGiveMeFive(int start, int end)
{
    int count = 0;

    for (int i = start; i <= end; ++i)
    {
        std::string numStr = std::to_string(i);
        if (numStr.find('5') == std::string::npos)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    assert(dontGiveMeFive(1, 9) == (8));
    assert(dontGiveMeFive(4, 17) == (12));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}