#include <iostream>
#include <vector>

class Solution
{
public:
    int wateringPlants(std::vector<int> &plants, int capacity)
    {
        int count = 0;
        int cur = capacity;

        for (int i = 0; i < plants.size(); ++i)
        {
            if (plants[i] <= cur)
            {
                cur -= plants[i];
                count++;
            }
            else
            {
                count += i * 2;
                cur = capacity;
                i--;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 2, 3, 3};
    std::cout << s1.wateringPlants(v, 5) << std::endl;

    v = {1, 1, 1, 4, 2, 3};
    std::cout << s1.wateringPlants(v, 4) << std::endl;

    v = {7, 7, 7, 7, 7, 7, 7};
    std::cout << s1.wateringPlants(v, 8) << std::endl;

    return 0;
}