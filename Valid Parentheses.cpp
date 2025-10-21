#include <iostream>
#include <vector>
#include <cassert>
#include <string>

bool validParentheses(const std::string &str)
{
    std::stack<char> stack;
    for (char c : str)
    {
        switch (c)
        {
        case '(':
            stack.push(')');
            break;
        case '[':
            stack.push(']');
            break;
        case '{':
            stack.push('}');
            break;
        case '<':
            stack.push('>');
            break;

        case ')':
        case ']':
        case '}':
        case '>':
            if (stack.empty() || stack.top() != c)
            {
                return false;
            }
            stack.pop();
            break;
        default:
            break;
        }
    }
    return stack.empty();
}

int main()
{
    bool validParentheses(const std::string &str);

    assert(validParentheses("()") == true);
    assert(validParentheses("((()))") == true);
    assert(validParentheses("()()()") == true);
    assert(validParentheses("(()())()") == true);
    assert(validParentheses("()(())((()))(())()") == true);

    assert(validParentheses("") == true);

    assert(validParentheses(")(") == false);
    assert(validParentheses("()()(") == false);
    assert(validParentheses("((())") == false);
    assert(validParentheses("())(()") == false);
    assert(validParentheses(")()") == false);
    assert(validParentheses(")") == false);

    return 0;
}