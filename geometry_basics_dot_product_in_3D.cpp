#include <cassert>
#include <iostream>
#include <cmath>
#define ASSERT_EQUALS_WITH_DELTA(a, b, delta) assert(std::fabs((a) - (b)) < (delta))

struct Vector {
    double x, y, z;
};

double dot_product(const Vector& a, const Vector& b){
  return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

int main()
{
    ASSERT_EQUALS_WITH_DELTA(dot_product(Vector{2, 0, -1}, Vector{0, -2, 1}), -1, 0.000001);
    ASSERT_EQUALS_WITH_DELTA(dot_product(Vector{1, 1, 1}, Vector{2, -2, 2}), 2, 0.000001);
    ASSERT_EQUALS_WITH_DELTA(dot_product(Vector{7, 2.5, -3}, Vector{0.4, -0.9, 0.2}), -0.05, 0.000001);

    std::cout << "all tests passed!" << std::endl;
    return 0;
}

// This series of katas will introduce you to basics of doing geometry with computers.

// Vector objects have x, y, and z attributes.

// Write a function calculating dot product of Vector a and Vector b.

// You can read more about dot product on Wikipedia.
// https://en.wikipedia.org/wiki/Dot_product

// Tests round answers to 6 decimal places.