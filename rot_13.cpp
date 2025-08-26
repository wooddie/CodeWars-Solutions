#include <string>
#include <cassert>
#include <iostream>

std::string rot13(const std::string &str)
{
    std::string result;
    for (char c : str)
    {
        if (std::isupper(c))
        {
            char ch_up = c;
            result += 'A' + ((ch_up - 'A' + 13) % 26);
        }
        else if (std::islower(c))
        {
            char ch_low = c;
            result += 'a' + ((ch_low - 'a' + 13) % 26);
        }
        else
        {
            result += c;
        }
    }

    return result;
}

int main()
{
    std::string str = "EBG13 rknzcyr.", rot = "ROT13 example.";
    assert(rot13(str) == (rot));
    str = "This is my first ROT13 excercise!";
    rot = "Guvf vf zl svefg EBG13 rkprepvfr!";
    assert(rot13(str) == (rot));
    str = "123";
    rot = "123";
    assert(rot13(str) == (rot));
    str = "@[`{";
    rot = "@[`{";
    assert(rot13(str) == (rot));
    str = "";
    rot = "";
    assert(rot13(str) == (rot));
    str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnop!@#$%^&*-+=?,qrstuvwxyz8231564970",
    rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabc!@#$%^&*-+=?,defghijklm8231564970";
    assert(rot13(str) == (rot));

    std::cout << "all tests passed!" << std::endl;
}