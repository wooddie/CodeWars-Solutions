#include <iostream>
#include <string>
#include <cassert>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string &str)
{
    std::string word, result;
    std::stringstream ss(str);

    while (ss >> word)
    {
        if (word.size() >= 5)
        {
            std::reverse(word.begin(), word.end());
            result += word + ' ';
        }
        else
        {
            result += word + ' ';
        }
    }

    result.pop_back();

    return result;
}

int main()
{
    assert(spinWords("to") == ("to"));

    assert(spinWords("Welcome") == ("emocleW"));
    assert(spinWords("CodeWars") == ("sraWedoC"));

    assert(spinWords("Hey fellow warriors") == ("Hey wollef sroirraw"));
    assert(spinWords("Burgers are my favorite fruit") == ("sregruB are my etirovaf tiurf"));
    assert(spinWords("Pizza is the best vegetable") == ("azziP is the best elbategev"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}