#include <iostream>
#include <cassert>
#include <string>

std::string encrypt(std::string text, int n)
{
    if (n == 0 || text.empty())
    {
        return text;
    }

    for (int k = 0; k < n; ++k)
    {
        std::string even_indexed, odd_indexed;
        for (size_t i = 0; i < text.size(); ++i)
        {
            if (i % 2 == 0)
            {
                even_indexed += text[i];
            }
            else
            {
                odd_indexed += text[i];
            }
        }
        text = odd_indexed + even_indexed;
    }

    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (n == 0 || encryptedText.empty())
    {
        return encryptedText;
    }

    for (int k = 0; k < n; ++k)
    {
        size_t len = encryptedText.size();
        std::string first_part = encryptedText.substr(0, len / 2);
        std::string second_part = encryptedText.substr(len / 2);
        std::string merged;
        size_t i = 0, j = 0;

        for (size_t idx = 0; idx < len; ++idx)
        {
            if (idx % 2 == 0 && j < second_part.size())
                merged += second_part[j++];
            else if (i < first_part.size())
                merged += first_part[i++];
        }
        encryptedText = merged;
    }

    return encryptedText;
}

int main()
{

    assert(encrypt("This is a test!", 0) == ("This is a test!"));
    assert(encrypt("This is a test!", 1) == ("hsi  etTi sats!"));
    assert(encrypt("This is a test!", 2) == ("s eT ashi tist!"));
    assert(encrypt("This is a test!", 3) == (" Tah itse sits!"));
    assert(encrypt("This is a test!", 4) == ("This is a test!"));
    assert(encrypt("This is a test!", -1) == ("This is a test!"));
    assert(encrypt("This kata is very interesting!", 1) == ("hskt svr neetn!Ti aai eyitrsig"));

    assert(decrypt("This is a test!", 0) == ("This is a test!"));
    assert(decrypt("hsi  etTi sats!", 1) == ("This is a test!"));
    assert(decrypt("s eT ashi tist!", 2) == ("This is a test!"));
    assert(decrypt(" Tah itse sits!", 3) == ("This is a test!"));
    assert(decrypt("This is a test!", 4) == ("This is a test!"));
    assert(decrypt("This is a test!", -1) == ("This is a test!"));
    assert(decrypt("hskt svr neetn!Ti aai eyitrsig", 1) == ("This kata is very interesting!"));

    assert(encrypt("", 0) == (""));
    assert(encrypt("", 3) == (""));
    assert(decrypt("", 0) == (""));
    assert(decrypt("", 3) == (""));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}