#include <iostream>
#include <cassert>
#include <string>

std::string generate_shape(unsigned n)
{
    std::string result;
    for (unsigned int i = 0; i < n; ++i)
    {
        for (unsigned int j = 0; j < n; ++j)
        {
            result += "+";
        }

        if (i < n - 1)
        {
            result += "\n";
        }
    }

    return result;
}

int main()
{
    assert(generate_shape(1) == ("+"));

    assert(generate_shape(3) == ("+++\n+++\n+++"));

    assert(generate_shape(8) == ("++++++++\n++++++++\n++++++++\n++++++++\n++++++++\n++++++++\n++++++++\n++++++++"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}