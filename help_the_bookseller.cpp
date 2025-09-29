#include <vector>
#include <iostream>
#include <cassert>
#include <map>

class StockList
{
public:
    static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories);
};

std::string StockList::stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
{
    std::unordered_map<char, int> list;

    
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