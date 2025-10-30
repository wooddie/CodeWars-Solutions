#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include <unordered_set>

std::vector<int> vowelIndices(const std::string &word)
{
    std::vector<int> res;
    std::unordered_set<int> list = {65, 69, 73, 79, 85, 89, 97, 101, 105, 111, 117, 121};

    for (unsigned long i = 0; i < word.size(); ++i)
    {
        if (list.count(int(word[i])))
        {
            res.push_back(i + 1);
        }
    }

    return res;
}

int main()
{
    std::vector<int> res{2, 4};
    assert(vowelIndices("super") == (res));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}