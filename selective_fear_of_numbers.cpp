#include <iostream>
#include <cassert>
#include <string>

bool am_i_afraid(const std::string &day, int num)
{
    if (day == "Monday" && num == 12) return true;
    if (day == "Tuesday" && num > 95) return true;
    if (day == "Wednesday" && num == 34) return true;
    if (day == "Thursday" && num == 0) return true;
    if (day == "Friday" && num % 2 == 0) return true;
    if (day == "Saturday" && num == 56) return true;
    if (day == "Sunday" && (num == 666 || num == -666)) return true;
    
    return false;
}

int main()
{
    assert(am_i_afraid("Monday", 13) == (false));
    assert(am_i_afraid("Sunday", -666) == (true));
    assert(am_i_afraid("Tuesday", 2) == (false));
    assert(am_i_afraid("Tuesday", 965) == (true));
    assert(am_i_afraid("Friday", 2) == (true));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// I've got a crazy mental illness. I dislike numbers a lot. 
// But it's a little complicated: The number I'm afraid of depends on which day 
// of the week it is... This is a concrete description of my mental illness:

// Monday --> 12

// Tuesday --> numbers greater than 95

// Wednesday --> 34

// Thursday --> 0

// Friday --> numbers divisible by 2

// Saturday --> 56

// Sunday --> 666 or -666

// Write a function which takes a string (day of the week) and an integer 
// (number to be tested) so it tells the doctor if I'm afraid or not. (return a boolean)