#include <iostream>
#include <cassert>

class EasyLine
{
public:
    static long long easyLine(int n);
};

long long EasyLine::easyLine(int n) {
    double result = 0.0;

    for (int i = 1; i <= n; ++i) {
        result += std::log(2 * n - i + 1) - std::log(i);
    }

    return static_cast<long long>(std::round(result));
}

int main()
{
    assert(EasyLine::easyLine(7) == 8);
    std::cout << EasyLine::easyLine(13) << std::endl;
    assert(EasyLine::easyLine(13) == 16);
    assert(EasyLine::easyLine(17) == 22);
    assert(EasyLine::easyLine(19) == 24);
    assert(EasyLine::easyLine(22) == 28);

    std::cout << "all tests passed!" << std::endl;

    return 0;
}