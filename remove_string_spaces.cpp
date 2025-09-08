#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

std::string no_space(const std::string& x)
{
    std::string result;
    std::string word;
    std::stringstream ss(x);

    while (ss >> word) {
        result += word;
    }

   return result;
}

int main()
{
    assert(no_space("8 j 8   mBliB8g  imjB8B8  jl  B") == "8j8mBliB8gimjB8B8jlB");
    assert(no_space("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd") == "88Bifk8hB8BB8BBBB888chl8BhBfd");
    assert(no_space("8aaaaa dddd r     ") == "8aaaaaddddr");
    assert(no_space("jfBm  gk lf8hg  88lbe8 ") == "jfBmgklf8hg88lbe8");
    assert(no_space("8j aam") == "8jaam");

    std::cout << "all tests passed!" << std::endl;
    return 0;
}