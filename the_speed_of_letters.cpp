#include <string>
#include <iostream>
#include <cassert>

std::string speedify(const std::string &input)
{
    if (input.empty())
        return "";

    int maxPos = 0;
    for (int i = 0; i < (int)input.size(); i++)
    {
        int shift = input[i] - 'A';
        int pos = i + shift;
        if (pos > maxPos)
            maxPos = pos;
    }

    std::string result(maxPos + 1, ' ');

    for (int i = 0; i < (int)input.size(); i++)
    {
        int shift = input[i] - 'A';
        int pos = i + shift;
        result[pos] = input[i];
    }

    return result;
}

int main()
{
    std::cout << speedify("AZ") << std::endl;
    assert(speedify("AZ") == "A                         Z");
    std::cout << speedify("ABC") << std::endl;
    assert(speedify("ABC") == "A B C");
    assert(speedify("ACE") == "A  C  E");
    assert(speedify("CBA") == "  A");
    assert(speedify("HELLOWORLD") == "     E H    DLL   OLO   R  W");

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// We all know that A is a slow and Z is a fast letter. This means that Z gets shifted to the right by 25 spaces,
// A doesn't get shifted at all, and B gets shifted by 1 space.

// You can assume the following things about your input:

// It will only contain uppercase letters from A to Z, no whitespaces or punctuation;
// Input strings will not exceed 100 characters (although your output string might!)
// Note that if 2 or more letters fall onto the same space after shifting, the latest character will be used.
// For example: "BA" -> " A"

// Examples

// "AZ"   -->  "A                         Z"
// "ABC"  -->  "A B C"
// "ACE"  -->  "A  C  E"
// "CBA"  -->  "  A"
// "HELLOWORLD"  -->  "     E H    DLL   OLO   R  W"