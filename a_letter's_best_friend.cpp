#include <iostream>
#include <cassert>
#include <string>

bool best_friend(const std::string &txt, char a, char b)
{
    return false;
}

int main()
{
    //* fixed_tests__are_best_friends

    // * first_letter_missing
    assert(best_friend("", 'z', 'h') == (true));
    assert(best_friend("h", 'z', 'h') == (true));
    assert(best_friend("abhc", 'z', 'h') == (true));

    // * both_letters_present
    assert(best_friend("zh", 'z', 'h') == (true));
    assert(best_friend("zoo wee mama", 'm', 'a') == (true));
    assert(best_friend("i found an ounce with my hound", 'o', 'u') == (true));
    assert(best_friend("he headed to the store", 'h', 'e') == (true));
    assert(best_friend("those were their thorns they said", 't', 'h') == (true));

    //* fixed_tests__NOT_best_friends

    // * second_letter_missing
    assert(best_friend("z", 'z', 'h') == (false));
    assert(best_friend("aza", 'z', 'h') == (false));

    // * both_letters_present
    assert(best_friend("zh", 'h', 'z') == (false));
    assert(best_friend("ll", 'l', 'l') == (false));
    assert(best_friend("zoo wee mama", 'a', 'm') == (false));
    assert(best_friend("we found your dynamite", 'd', 'y') == (false));
    assert(best_friend("look they took the cookies", 'o', 'o') == (false));
    assert(best_friend("a test", 't', 'e') == (false));
    assert(best_friend("abcde", 'e', 'e') == (false));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Task

// Given a string, return if all occurrences of a given letter are always
// immediately followed by the other given letter.

// Worked Example

// ("he headed to the store", "h", "e") ➞ True

// # All occurences of "h": ["he", "headed", "the"]
// # All occurences of "h" have an "e" after it.
// # Return True

// ('abcdee', 'e', 'e') ➞ False

// # For first "e" we can get "ee"
// # For second "e" we cannot have "ee"
// # Return False
// Examples

// ("i found an ounce with my hound", "o", "u") ➞ True

// ("we found your dynamite", "d", "y") ➞ False
// Notes

// All sentences will be given in lowercase.