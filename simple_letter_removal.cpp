#include <iostream>
#include <cassert>

std::string solve(const std::string &s, unsigned k)
{
    unsigned count = 0;
    std::string str = s;

    if (k > s.size())
    {
        return "";
    }

    char letter = 'a';

    while (count < k)
    {
        auto pos = str.find(letter);

        if (pos != std::string::npos)
        {
            str.erase(pos, 1);
            count++;
        }
        else
        {
            letter = 'a' + (letter - 'a' + 1) % 26;
        }
    }

    return str;
}

int main()
{
    assert(solve("abracadabra", 1) == ("bracadabra"));
    assert(solve("abracadabra", 2) == ("brcadabra"));
    assert(solve("abracadabra", 6) == ("rcdbr"));
    assert(solve("abracadabra", 8) == ("rdr"));
    assert(solve("abracadabra", 50) == (""));

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
