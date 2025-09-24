#include <iostream>
#include <string>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;
        for (char c : s)
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
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isValid("()") << std::endl;     //* true
    std::cout << std::boolalpha << s1.isValid("()[]{}") << std::endl; //* true
    std::cout << std::boolalpha << s1.isValid("(]") << std::endl;   //* false
    std::cout << std::boolalpha << s1.isValid("([])") << std::endl; //* true
    std::cout << std::boolalpha << s1.isValid("([)]") << std::endl; //* false

    return 0;
}