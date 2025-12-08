#include <iostream>
#include <vector>

class Solution
{
public:
    bool canVisitAllRooms(std::vector<std::vector<int>> &rooms)
    {
        std::vector<bool> visited(rooms.size(), false);
        std::stack<int> q;

        visited[0] = true;
        q.push(0);

        while (!q.empty())
        {
            int room = q.top();
            q.pop();

            for (const auto &k : rooms[room])
            {
                if (visited[k] == false)
                {
                    visited[k] = true;
                    q.push(k);
                }
            }
        }

        bool flag = true;

        for (const auto &b : visited)
        {
            if (b != true)
            {
                flag = false;
                break;
            }
        }

        return flag;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{1}, {2}, {3}, {}};
    std::cout << std::boolalpha << s1.canVisitAllRooms(v) << std::endl;

    v = {{1, 3}, {3, 0, 1}, {2}, {0}};
    std::cout << std::boolalpha << s1.canVisitAllRooms(v) << std::endl;

    return 0;
}