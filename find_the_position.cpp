#include <iostream>
#include <string>
#include <cassert>

std::string position(char letter)
{
    return "Position of alphabet: " + std::to_string(('a' - ('a' - letter) % 26) - 96);
}

int main()
{
    assert(position('a') == ("Position of alphabet: 1"));

    assert(position('z') == ("Position of alphabet: 26"));

    assert(position('e') == ("Position of alphabet: 5"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}