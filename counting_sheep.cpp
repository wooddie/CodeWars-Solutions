#include <iostream>
#include <cassert>

int count_sheep(std::vector<bool> arr)
{
    int count = 0;

    for (bool b : arr) {
        if (b == true) {
            count++;
        }
    }

    return count;
}

int main()
{
    std::vector<bool> array1 = {true, true, true, false,
                                true, true, true, true,
                                true, false, true, false,
                                true, false, false, true,
                                true, true, true, true,
                                false, false, true, true};
    
    assert(count_sheep(array1) == (17));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}