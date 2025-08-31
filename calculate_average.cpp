#include <vector>
#include <cassert>
#include <iostream>
#define ASSERT_EQUALS_WITH_DELTA(a, b, eps) assert(std::abs((a) - (b)) < (eps))

double calcAverage(const std::vector<int> &values)
{
    double sum = 0.0;
    for (int i : values) {
        sum += i;
    }

    return sum / values.size();
}

int main()
{
    const double EPS = 1e-3;

    // * Check_Small_Positive_Values
    ASSERT_EQUALS_WITH_DELTA(calcAverage({2, 5}), 3.5, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({5}), 5, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({4, 2, 1}), 2.33333, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({3, 2, 5, 1}), 2.75, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({3, 2, 3, 5, 1}), 2.8, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({3, 4, 2, 4, 5}), 3.6, EPS);

    // * Check_Small_Mixed_Values
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-2, -6, 5, 2}), -0.25, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({6, -6, 9, 8}), 4.25, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-7, -4, -10, -6, -6}), -6.6, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-3, -8, -10, -6, -5}), -6.4, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-4, -4}), -4, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-5}), -5, EPS);

    // * Check_Medium_Values_and_Size
    ASSERT_EQUALS_WITH_DELTA(calcAverage({20, 14, 16, 11, 20, 14, 14}), 15.5714, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-1, 0, -3, 10, 2, -9, -1}), -0.285714, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({15, 18, 16, 17, 15, 12, 16, 15}), 15.5, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({13, 11, 11, 19, 12, 20, 17, 16, 14}), 14.7778, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({13, 15, 13, 17, 19, 20, 17, 18, 13, 18}), 16.3, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({3, 7, 2, -5, 10, 8, -7, 1}), 2.375, EPS);

    // * Check_Larger_Values_and_Size
    ASSERT_EQUALS_WITH_DELTA(calcAverage({24, 30, 12, 26, 23, 24, 29, 12, 16, 13}), 20.9, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-2, -2, 1, 1, -2, -8, 3, -4, -2, 1}), -1.4, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({20, 28, 25, 11, 24, 25, 22, 12, 15, 12, 14, 22}), 19.1667, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({46, 35, 45, 47, 25, 42, 43, 40, 35, 25, 48}), 39.1818, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({-4, 6, 7, -5, -4, -2, -3, 7, 7, 5, 8, -6, 5}), 1.61538, EPS);
    ASSERT_EQUALS_WITH_DELTA(calcAverage({22, 22, 24, 15, 12, 18, 22, 14, 24, 23, 29, 19, 22, 20, 26}), 20.8, EPS);

    std::cout << "all tests passed!" << std::endl;

    return 0;
}