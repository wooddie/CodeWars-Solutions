#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> top3(
    const std::vector<std::string> &products,
    const std::vector<int> &amounts,
    const std::vector<int> &prices)
{
    std::vector<std::pair<int, std::string>> totals;
    std::vector<std::string> result;

    for (size_t i = 0; i < products.size(); ++i)
    {
        int total = amounts[i] * prices[i];
        totals.push_back({total, products[i]});
    }

    sort(totals.begin(), totals.end(), [](auto &a, auto &b)
         { return a.first > b.first; });

    for (int i = 0; i < 3; ++i)
    {
        result.push_back(totals[i].second);
    }

    return result;
}

int main()
{

    return 0;
}