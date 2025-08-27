#include <string>
#include <cassert>
#include <unordered_map>
#include <iostream>

std::unordered_map<char, char> gaderypoluki = {
    {'A', 'G'}, {'G', 'A'}, {'D', 'E'}, {'E', 'D'}, {'Y', 'R'}, {'R', 'Y'}, {'O', 'P'}, {'P', 'O'}, {'L', 'U'}, {'U', 'L'}, {'I', 'K'}, {'K', 'I'},

    {'a', 'g'},
    {'g', 'a'},
    {'d', 'e'},
    {'e', 'd'},
    {'y', 'r'},
    {'r', 'y'},
    {'o', 'p'},
    {'p', 'o'},
    {'l', 'u'},
    {'u', 'l'},
    {'i', 'k'},
    {'k', 'i'}};

std::string encode(const std::string &str)
{
    std::string result;
    for (char c : str)
    {
        if (gaderypoluki[c])
        {
            result += gaderypoluki[c];
        }
        else
        {
            result += c;
        }
    }

    return result;
}

std::string decode(const std::string &str)
{
    std::string result;
    for (char c : str)
    {
        if (gaderypoluki[c])
        {
            result += gaderypoluki[c];
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

    assert(encode("Ala has a cat") == ("Gug hgs g cgt"));
    assert(decode("Gug hgs g cgt") == ("Ala has a cat"));
    assert(encode("ABCD") == ("GBCE"));
    assert(decode("GBCE") == ("ABCD"));
    assert(encode("gaderypoluki") == ("agedyropulik"));
    assert(decode("agedyropulik") == ("gaderypoluki"));
    std::cout << "all tests passed!" << std::endl;

    return 0;
}