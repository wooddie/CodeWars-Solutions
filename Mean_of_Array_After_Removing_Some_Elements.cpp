#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Solution
{
public:
    double trimMean(std::vector<int> &arr)
    {
        std::sort(arr.begin(), arr.end());
        int pr = (5 * arr.size()) / 100;

        if (arr.size() >= pr)
        {
            arr.erase(arr.begin(), arr.begin() + pr);
            arr.erase(arr.end() - pr, arr.end());
        }

        double sum = std::accumulate(arr.begin(), arr.end(), 0);

        return sum / arr.size();
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    std::cout << s1.trimMean(v) << std::endl;

    v = {6, 2, 7, 5, 1, 2, 0, 3, 10, 2, 5, 0, 5, 5, 0, 8, 7, 6, 8, 0};
    std::cout << s1.trimMean(v) << std::endl;

    v = {6, 0, 7, 0, 7, 5, 7, 8, 3, 4, 0, 7, 8, 1, 6, 8, 1, 1, 2, 4, 8, 1, 9, 5, 4, 3, 8, 5, 10, 8, 6, 6, 1, 0, 6, 10, 8, 2, 3, 4};
    std::cout << s1.trimMean(v) << std::endl;

    return 0;
}