#include <iostream>
#include <cassert>

std::string solve(const std::string &s, unsigned k)
{
    return ""; // Do your magic!
}

void doTest(const std::string &s, unsigned k, const std::string &expected)
{
    assert(solve(s, k) == (expected));
}

int main()
{
    doTest("abracadabra", 1, "bracadabra");
    doTest("abracadabra", 2, "brcadabra");
    doTest("abracadabra", 6, "rcdbr");
    doTest("abracadabra", 8, "rdr");
    doTest("abracadabra", 50, "");

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// In this Kata, you will be given a lower case string and your task will be to 
// remove k characters from that string using the following rule:

// - first remove all letter 'a', followed by letter 'b', then 'c', etc...
// - remove the leftmost character first.
// For example: 
// solve('abracadabra', 1) = 'bracadabra' # remove the leftmost 'a'.
// solve('abracadabra', 2) = 'brcadabra'  # remove 2 'a' from the left.
// solve('abracadabra', 6) = 'rcdbr'      # remove 5 'a', remove 1 'b' 
// solve('abracadabra', 8) = 'rdr'
// solve('abracadabra',50) = ''
// More examples in the test cases. Good luck!

