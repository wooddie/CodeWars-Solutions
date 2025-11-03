#include <iostream>
#include <cassert>
#include <string>

std::string DNAtoRNA(std::string dna)
{
    std::string result;

    for (char c : dna)
    {
        if (c == 'T')
        {
            result += 'U';
        }
        else
        {
            result += c;
        }
    }

    return result;
}

int main()
{
    assert(DNAtoRNA("GCAT") == ("GCAU"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}