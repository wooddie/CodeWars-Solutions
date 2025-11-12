#include <iostream>
#include <string>

class Solution
{
public:
    std::string defangIPaddr(std::string address)
    {
        size_t pos = 0;

        while ((pos = address.find('.', pos)) != std::string::npos)
        {
            address.replace(pos, 1, "[.]");
            pos += 3;
        }

        return address;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.defangIPaddr("1.1.1.1") << std::endl;
    std::cout << s1.defangIPaddr("255.100.50.0") << std::endl;

    return 0;
}