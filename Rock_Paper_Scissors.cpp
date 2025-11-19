#include <iostream>
#include <cassert>
#include <unordered_map>
#include <string>

std::string rps(const std::string &p1, const std::string &p2)
{
    std::unordered_map<std::string, int> choiceMap = {
        {"rock", 0},
        {"paper", 1},
        {"scissors", 2}};

    int c1 = choiceMap.at(p1);
    int c2 = choiceMap.at(p2);

    int res = (c1 - c2 + 3) % 3;

    if (res == 0)
        return "Draw!";
    else if (res == 1)
        return "Player 1 won!";
    else
        return "Player 2 won!";
}

int main()
{
    assert(rps("rock", "scissors") == ("Player 1 won!"));
    assert(rps("rock", "paper") == ("Player 2 won!"));
    assert(rps("rock", "rock") == ("Draw!"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}