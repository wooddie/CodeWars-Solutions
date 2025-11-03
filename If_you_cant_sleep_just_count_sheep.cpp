#include <string>
#include <cassert>
#include <iostream>

std::string countSheep(int number)
{
    std::string result;
    int count = 1;

    while (count <= number)
    {
        result += std::to_string(count) + " sheep...";
        count++;
    }

    return result;
}

int main()
{
    assert(countSheep(0) == (""));
    assert(countSheep(1) == ("1 sheep..."));
    assert(countSheep(2) == ("1 sheep...2 sheep..."));
    assert(countSheep(3) == ("1 sheep...2 sheep...3 sheep..."));
    assert(countSheep(4) == ("1 sheep...2 sheep...3 sheep...4 sheep..."));
    assert(countSheep(5) == ("1 sheep...2 sheep...3 sheep...4 sheep...5 sheep..."));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}