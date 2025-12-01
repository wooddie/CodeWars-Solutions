#include <vector>
#include <iostream>

class Solution
{
public:
    std::vector<int> dailyTemperatures(std::vector<int> &temperatures)
    {
        int n = temperatures.size();
        std::vector<int> res(n, 0);
        std::stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                int idx = st.top();
                st.pop();
                res[idx] = i - idx;
            }
            st.push(i);
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {73, 74, 75, 71, 69, 72, 76, 73};
    for (const auto &n : s1.dailyTemperatures(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {30, 40, 50, 60};
    for (const auto &n : s1.dailyTemperatures(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {30, 60, 90};
    for (const auto &n : s1.dailyTemperatures(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}