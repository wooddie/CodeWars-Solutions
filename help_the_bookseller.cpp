#include <vector>
#include <iostream>
#include <cassert>
#include <map>
#include <sstream>

class StockList
{
public:
    static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories);
};

std::string StockList::stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
{
    std::unordered_map<char, int> list;
    bool hasData = false;

    for (const std::string &s : lstOfArt)
    {
        if (s.empty())
            continue;

        auto pos = s.find(' ');
        if (pos == std::string::npos)
            continue;

        std::string article = s.substr(0, pos);
        int num = std::stoi(s.substr(pos + 1));

        char category = article[0];
        list[category] += num;
        hasData = true;
    }

    std::stringstream ss;

    for (size_t i = 0; i < categories.size(); ++i)
    {
        if (categories[i].empty())
            continue;

        char cat = categories[i][0];
        int total = list.count(cat) ? list[cat] : 0;

        ss << "(" << cat << " : " << total << ")";
        if (i != categories.size() - 1)
            ss << " - ";
    }

    if(!hasData)
    {
        return "";
    }

    return ss.str();
}

void testequal(std::string ans, std::string sol)
{
    assert(ans == (sol));
}

static void dotest(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories, std::string expected)
{
    testequal(StockList::stockSummary(lstOfArt, categories), expected);
}

int main()
{
    std::vector<std::string> art = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
    std::vector<std::string> cd = {"A", "B"};
    dotest(art, cd, "(A : 200) - (B : 1140)");

    art = {"BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"};
    cd = {"A", "B", "C", "D"};
    dotest(art, cd, "(A : 0) - (B : 1290) - (C : 515) - (D : 600)");

    std::cout << "all tests passed!" << std::endl;

    return 0;
}