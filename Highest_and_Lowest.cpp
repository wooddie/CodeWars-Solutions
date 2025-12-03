#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <sstream>

std::string highAndLow(const std::string &numbers)
{
    std::stringstream ss(numbers);
    std::string token;
    std::vector<int> v;

    while (ss >> token)
    {
        v.push_back(std::stoi(token));
    }

    auto minElement = std::min_element(v.begin(), v.end());
    auto maxElement = std::max_element(v.begin(), v.end());

    std::string res = std::to_string(*maxElement) + " " + std::to_string(*minElement);

    return res;
}

int main()
{
    assert(highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") == ("42 -9"));
    assert(highAndLow("1 2 3") == ("3 1"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}