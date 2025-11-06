#include <iostream>
#include <string>
#include <cassert>
#include <sstream>

std::string vaporcode(const std::string &str)
{
    std::string result, word;
    std::stringstream ss(str);

    while (ss >> word)
    {
        for (auto c : word)
        {
            result += toupper(c);
            result += "  ";
        }
    }

    result.resize(result.size() - 2);

    return result;
}

int main()
{
    assert(vaporcode("Let's go to the movies") == ("L  E  T  '  S  G  O  T  O  T  H  E  M  O  V  I  E  S"));
    assert(vaporcode("Why isn't my code working?") == ("W  H  Y  I  S  N  '  T  M  Y  C  O  D  E  W  O  R  K  I  N  G  ?"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}