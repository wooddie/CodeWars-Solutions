#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

std::vector<std::string> string_to_array(const std::string &s)
{
    std::vector<std::string> result;
    std::string word;
    std::stringstream ss(s);

    while (ss >> word)
    {
        result.push_back(word);
    }

    return (result.empty()) ? std::vector<std::string>{""} : result;
}

int main()
{
    assert(string_to_array("some value") == (std::vector<std::string>{"some", "value"}));
    assert(string_to_array("Robin Singh") == (std::vector<std::string>{"Robin", "Singh"}));
    assert(string_to_array("Codewars") == (std::vector<std::string>{"Codewars"}));
    assert(string_to_array("I love arrays") == (std::vector<std::string>{"I", "love", "arrays"}));
    assert(string_to_array("1 2 3") == (std::vector<std::string>{"1", "2", "3"}));
    assert(string_to_array("") == (std::vector<std::string>{""}));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}