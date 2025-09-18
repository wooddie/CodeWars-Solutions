#include <iostream>
#include <cassert>
#include <string>

/*
 * Takes a bottle_weight and scale of the bottle to its contents
 * and returns the weight of its contents
 * @param {int} bottleWeight:
 *  The weight of the entire bottle and contents
 * @param {string} scale:
 *  A string comparing the weight of the bottle contents to the weight of the bottle by itself
 *  Acceptable values: ('2 times larger', '4 times larger', '50 times smaller', etc..)
 */
int content_weight(int bottle_weight, std::string scale)
{
}

int main()
{
    assert(content_weight(120, "2 times larger") == (80));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Welcome to the Mathematics gameshow. 
// I'm your host, Apex Rhombus, and it's time for the lightning round!

// Today we'll talk about a hypothetical bottle. 
// This entire bottle weighs 120 grams. 
// Its contents weigh twice as much as the bottle itself. 
// What, may I ask, do the contents weigh?

// ...Did you guess 80 grams? Correct! Now that you've got that idea, 
// I'm gonna ask you that question in many different ways so you'd better get ready!

// Let's complete the function that takes in two parameters: bottle weight and scale. 
// This function will return the weight of the contents inside the bottle.

// bottle weight will be an integer representing the weight of the entire bottle 
// (contents included).

// scale will be a string that you will need to parse. 
// It will tell you how the content weight compares to the weight of the bottle by itself. 
// 2 times larger, 6 times larger, and 15 times smaller would all be valid strings 
// (smaller and larger are the only comparison words).

// It is guaranteed that the result will always be an integer. Good luck!