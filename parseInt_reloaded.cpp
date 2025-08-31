#include <cassert>
#include <iostream>
#include <string>
#include <map>
#include <sstream>

// Единицы и числа до двадцати
const std::map<std::string, int> units{
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19}};

// Десятки
const std::map<std::string, int> tens{
    {"twenty", 20}, {"thirty", 30}, {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70}, {"eighty", 80}, {"ninety", 90}};

// Множители
const std::map<std::string, int> multipliers{
    {"hundred", 100},
    {"thousand", 1000},
    {"million", 1000000}};

long parse_int(std::string number)
{
    std::replace(number.begin(), number.end(), '-', ' ');
    std::stringstream ss(number);
    std::string word;
    long result = 0;
    long current = 0;

    while (ss >> word)
    {
        if (units.count(word))
        {
            current += units.at(word);
        }
        else if (tens.count(word))
        {
            current += tens.at(word);
        }
        else if (word == "hundred")
            current *= 100;
        else if (word == "thousand" || word == "million")
        {
            result += current * multipliers.at(word);
            current = 0;
        }
        else if (word == "and")
        {
            continue;
        }
    }
    result += current;

    return result;
}

int main()
{
    assert(parse_int("one") == (1));
    assert(parse_int("twenty") == (20));
    assert(parse_int("two hundred and forty-six") == (246));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// In this kata we want to convert a string into an integer.
// The strings simply represent the numbers in words.

// Examples:

// "one" => 1
// "twenty" => 20
// "two hundred forty-six" => 246
// "seven hundred eighty-three thousand nine hundred and nineteen" => 783919
// Additional Notes:

// The minimum number is "zero" (inclusively)
// The maximum number, which must be supported is 1 million (inclusively)
// The "and" in e.g. "one hundred and twenty-four" is optional, in some cases
// it's present and in others it's not
// All tested numbers are valid, you don't need to validate them