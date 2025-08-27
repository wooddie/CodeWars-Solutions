#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>
#include <cassert>

class Kata
{
public:
    static std::vector<int> Encode(std::string str, int n)
    {
        std::vector<int> list_key;
        while (n > 0)
        {
            int digit = n % 10;
            list_key.push_back(digit);
            n /= 10;
        }

        std::reverse(list_key.begin(), list_key.end());
        int current_index = 0;
        std::vector<int> num;

        for (size_t i = 0; i < str.size(); ++i)
        {
            num.push_back((str[i] - 'a' + 1) + list_key[current_index]);
            current_index = (current_index + 1) % list_key.size();
        }

        return num;
    }

    static std::string Decode(std::vector<int> code, int n)
    {

        std::vector<int> list_key;
        while (n > 0)
        {
            int digit = n % 10;
            list_key.push_back(digit);
            n /= 10;
        }

        std::reverse(list_key.begin(), list_key.end());

        int current_index = 0;
        std::vector<int> num;

        for (size_t i = 0; i < code.size(); ++i)
        {
            int n = code[i] - list_key[current_index];
            if (n <= 0)
                n += 26;
            num.push_back(n);

            current_index = (current_index + 1) % list_key.size();
        }

        std::string result;

        for (int n : num)
        {
            char chr = 'a' + (n - 1);
            result += chr;
        }

        return result;
    }
};

int main()
{
    assert(Kata::Encode("scout", 1939) == (std::vector<int>({20, 12, 18, 30, 21})));
    assert(Kata::Encode("masterpiece", 1939) == (std::vector<int>({14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8})));

    assert(Kata::Decode(std::vector<int>({20, 12, 18, 30, 21}), 1939) == ("scout"));
    assert(Kata::Decode(std::vector<int>({14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8}), 1939) == ("masterpiece"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}