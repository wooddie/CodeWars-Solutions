#include <iostream>
#include <string>
#include <cassert>

std::string DNAStrand(const std::string &dna)
{
    std::string result;

    for (const auto &c : dna)
    {
        switch (c)
        {
        case 'G':
            result += 'C';
            break;
        case 'C':
            result += 'G';
            break;
        case 'T':
            result += 'A';
            break;
        case 'A':
            result += 'T';
            break;

        default:
            break;
        }
    }

    return result;
}

int main()
{
    assert(DNAStrand("AAAA") == ("TTTT"));
    assert(DNAStrand("ATTGC") == ("TAACG"));
    assert(DNAStrand("GTAT") == ("CATA"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}