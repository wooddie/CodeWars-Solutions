#include <cassert>
#include <iostream>
#include <vector>
#include <string>
#include <utility>

std::string find_routes(const std::vector<std::pair<std::string, std::string>> &routes)
{
    std::string result;

    for (int i = 0; i < routes.size() - 1; ++i)
    {
        while (true)
        {

        }
        
    }
    
    return result;
}

int main()
{
    std::vector<std::pair<std::string, std::string>> in = {{"MNL", "TAG"}, {"CEB", "TAC"}, {"TAG", "CEB"}, {"TAC", "BOR"}};
    std::cout << find_routes(in) << std::endl;
    //assert(find_routes(in) == ("MNL, TAG, CEB, TAC, BOR"));

    in = {{"Chicago", "Winnipeg"}, {"Halifax", "Montreal"}, {"Montreal", "Toronto"}, {"Toronto", "Chicago"}, {"Winnipeg", "Seattle"}};
    //std::cout << find_routes(in) << std::endl;
    //assert(find_routes(in) == ("Halifax, Montreal, Toronto, Chicago, Winnipeg, Seattle"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// We are diligently pursuing our elusive operative, Matthew Knight, who also 
// goes by the alias Roy Miller. He employs a nomadic lifestyle to evade detection, 
// constantly moving from one location to another, with each of his journeys following 
// a perplexing and non-standard sequence of itineraries. Our mission is to decipher 
// the routes he will undertake during each of his voyages.

// Task

// You've been provided with an array of itinerary routes, decipher the precise 
// destinations he will visit in the correct sequence according to his meticulously 
// planned itineraries.

// Example

// Based on the provided routes:

// [ [USA, BRA], [JPN, PHL], [BRA, UAE], [UAE, JPN] ]
// The correct sequence of destinations is:

// "USA, BRA, UAE, JPN, PHL"
// Note:

// You can safely assume that there will be no duplicate locations with distinct routes.
// All routes provided will have non-empty itineraries.
// There will always be at least one (1) route connecting one waypoint to another.