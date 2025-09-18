#include <iostream>
#include <cassert>
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints)
{
    // your code here
}

int main()
{
    using vec = std::vector<int>;

    assert(betterThanAverage(vec{2, 3}, 5) == (true));
    assert(betterThanAverage(vec{100, 40, 34, 57, 29, 72, 57, 88}, 75) == (true));
    assert(betterThanAverage(vec{12, 23, 34, 45, 56, 67, 78, 89, 90}, 69) == (true));
    assert(betterThanAverage(vec{41, 75, 72, 56, 80, 82, 81, 33}, 50) == (false));
    assert(betterThanAverage(vec{29, 55, 74, 60, 11, 90, 67, 28}, 21) == (false));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// There was a test in your class and you passed it. Congratulations!

// But you're an ambitious person. You want to know if you're better than the
// average student in your class.

// You receive an array with your peers' test scores. Now calculate the average
// and compare your score!

// Return true if you're better, else false!

// Note:

// Your points are not included in the array of your class's points. Do not forget
// them when calculating the average score!