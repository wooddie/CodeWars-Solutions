#include <string>
#include <cassert>
#include <iostream>

bool sp_eng(const std::string &sentence)
{
    std::string str = sentence;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    auto pos = str.find("english");

    if (pos != std::string::npos)
    {
        return true;
    }

    return false;
}

int main()
{
    assert(sp_eng("english") == true);
    assert(sp_eng("1234english ;k") == true);
    assert(sp_eng("English") == true);
    assert(sp_eng("eNgliSh") == true);
    assert(sp_eng("1234#$%%eNglish ;k9") == true);

    assert(sp_eng("egnlish") == false);
    assert(sp_eng("1234egn lis;h") == false);
    assert(sp_eng("EGNlihs") == false);
    assert(sp_eng("1234englihs**") == false);

    assert(sp_eng("") == false);

    std::cout << "all tests passed!" << std::endl;
}