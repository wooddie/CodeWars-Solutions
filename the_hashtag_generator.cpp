#include <iostream>
#include <cassert>
#include <optional>
#include <string>
#include <sstream>
#include <cctype>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t &str)
{
    std::stringstream ss(str);
    str_t word;
    str_t result = "#";

    while (ss >> word)
    {
        for (char &c : word)
        {
            c = std::tolower(static_cast<unsigned char>(c));
        }

        word[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(word[0])));
        result += word;
    }

    if (result == "#" || result.size() > 140)
    {
        return std::nullopt;
    }

    return result;
}

int main()
{
    assert(generate_hashtag("") == (std::nullopt));
    assert(generate_hashtag(std::string(200, ' ')) == (std::nullopt));
    assert(generate_hashtag("Do We have A Hashtag") == ("#DoWeHaveAHashtag"));
    assert(generate_hashtag("Codewars") == ("#Codewars"));
    assert(generate_hashtag("Codewars Is Nice") == ("#CodewarsIsNice"));
    assert(generate_hashtag("Codewars is nice") == ("#CodewarsIsNice"));
    assert(generate_hashtag("code" + std::string(149, ' ') + "wars") == ("#CodeWars"));
    assert(generate_hashtag("Looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong Cat") == (std::nullopt));
    assert(generate_hashtag(std::string(139, 'a')) == ("#A" + std::string(138, 'a')));
    assert(generate_hashtag(std::string(140, 'a')) == (std::nullopt));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// The marketing team is spending way too much time typing in hashtags.
// Let's help them with our own Hashtag Generator!

// Here's the deal:

// It must start with a hashtag (#).
// All words must have their first letter capitalized.
// If the final result is longer than 140 chars it must return std::nullopt.
// If the input or the result is an empty string it must return std::nullopt.
// Examples

// " Hello there thanks for trying my Kata"  =>  "#HelloThereThanksForTryingMyKata"
// "    Hello     World   "                  =>  "#HelloWorld"
// ""                                        =>  std::nullopt