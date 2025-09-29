#include <vector>
#include <string>
#include <cassert>
#include <iostream>
#include <algorithm>

std::vector<std::string> capMe(const std::vector<std::string> &strings)
{
    std::vector<std::string> str;
    for(size_t i = 0; i < strings.size(); ++i)
    {
        std::string word = strings[i];
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        word[0] = toupper(word[0]);
        str.push_back(word);
    }

    return str;
}

int main()
{
    std::vector<std::string> input = {"jo", "nelson", "jurie"};
    std::vector<std::string> output = {"Jo", "Nelson", "Jurie"};
    assert(capMe(input) == (output));

    input = {"OZZA", "ARRA", "AZZA"};
    output = {"Ozza", "Arra", "Azza"};
    assert(capMe(input) == (output));

    input = {"Ror", "NOR", "xor"};
    output = {"Ror", "Nor", "Xor"};
    assert(capMe(input) == (output));

    input = {"Ror", "nOr", "xoR"};
    output = {"Ror", "Nor", "Xor"};
    assert(capMe(input) == (output));

    input = {"", "", ""};
    output = {"", "", ""};
    assert(capMe(input) == (output));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Create a function that accepts an array of names, 
// and returns an array of each name with its first letter capitalized 
// and the remainder in lowercase.

// Examples

// ["jo", "nelson", "jurie"] -->  ["Jo", "Nelson", "Jurie"]
// ["KARLY", "DANIEL", "KELSEY"] --> ["Karly", "Daniel", "Kelsey"]