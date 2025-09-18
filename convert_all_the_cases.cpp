#include <iostream>
#include <cassert>

std::string changeCase(const std::string &identifier, const std::string &targetCase)
{

    return "";
}

void dotest(const std::string &identifier, const std::string &targetCase, const std::string &expected, const std::string &desc)
{
    (void)desc;
    std::string answer = changeCase(identifier, targetCase);
    assert(answer == (expected));
}

int main()
{
    dotest("snakeCase", "snake", "snake_case", "camelCase to snake_case conversion should work");
    dotest("some-lisp-name", "camel", "someLispName", "kebab-case to camelCase conversion should work");
    dotest("map_to_all", "kebab", "map-to-all", "snake_case to kebab-case conversion should work");
    dotest("doHTMLRequest", "kebab", "do-h-t-m-l-request", "camelCase to kebab-case conversion should work");
    dotest("invalid-inPut_bad", "kebab", "", "mIx-ed_cAse input should be considered invalid");
    dotest("valid-input", "huh???", "", "Invalid target cases should be dealt with");
    dotest("", "camel", "", "An empty string should not be changed.");
    dotest("snake-kebab_case", "kebab", "", "snake-kebab_case is invalid");
    dotest("snakeCamel_case", "snake", "", "snakeCamel_case is invalid");
    dotest("kebabCamel-case", "snake", "", "kebabCamel-case is invalid");
    dotest("case-Camel", "kebab", "", "case-Camel is invalid");

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// In this kata, you will make a function that converts between camelCase,
// snake_case, and kebab-case.

// You must write a function that changes to a given case. It must be able to
// handle all three case types:

// cpp> changeCase("snakeCase", "snake")
// "snake_case"
// cpp> changeCase("some-lisp-name", "camel")
// "someLispName"
// cpp> changeCase("map_to_all", "kebab")
// "map-to-all"
// cpp> changeCase("doHTMLRequest", "kebab")
// "do-h-t-m-l-request"
// cpp> changeCase("invalid-inPut_bad", "kebab")
// ""
// cpp> changeCase("valid-input", "huh???")
// ""
// cpp> changeCase("", "camel")
// ""
// Your function must deal with invalid input as shown, though it will only
// be passed strings. Furthermore, all valid identifiers will be lowercase except
// when necessary, in other words on word boundaries in camelCase.

// (Any translations would be greatly appreciated!)