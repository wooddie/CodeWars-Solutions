#include <iostream>
#include <cassert>
#include <cmath>

long long countOnesUpTo (long long n)
{
    if (n == 0)
        return 0;

    long long pos = 0;
    long long temp = n;
  
    while (temp > 1)
    {
        temp >>= 1;
        pos++;
    }

    long long result = pos * (1LL << (pos - 1));
    long long remaining = n - (1LL << pos);

    result += (remaining + 1);
    result += countOnesUpTo(remaining);

    return result;
};

long long countOnes(int left, int right)
{
    return countOnesUpTo(right) - countOnesUpTo(left - 1);
}

int main () {

    assert(countOnes(4, 7) == 8);

    std::cout << "all tests passed!" << std::endl;

    return 0;
}