#include <string>
#include <vector>
#include <cassert>
#include <iostream>

std::string likes(const std::vector<std::string> &names)
{
    if (names.empty())
    {
        return "no one likes this";
    }
    else if (names.size() == 1)
    {
        return names[0] + " likes this";
    }
    else if (names.size() == 2)
    {
        return names[0] + " and " + names[1] + " like this";
    }
    else if (names.size() == 3)
    {
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    }
    else
    {
        int count = 0;

        for (size_t i = 2; i < names.size(); ++i)
        {
            count++;
        }

        return names[0] + ", " + names[1] + " and " + std::to_string(count) + " others" + " like this";
    }

    return "";
}

int main()
{
    assert(likes({}) == ("no one likes this"));
    assert(likes({"Peter"}) == ("Peter likes this"));
    assert(likes({"Jacob", "Alex"}) == ("Jacob and Alex like this"));
    assert(likes({"Max", "John", "Mark"}) == ("Max, John and Mark like this"));
    assert(likes({"Alex", "Jacob", "Mark", "Max"}) == ("Alex, Jacob and 2 others like this"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}