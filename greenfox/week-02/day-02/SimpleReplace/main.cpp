#include <iostream>

int main() {

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away
    //std::string example("In a dishwasher far far away");
    //example.replace("dishwasher", "galaxy");
    
    std::string example("In a dishwasher far far away");
    std::string from = "dishwasher";

    int start_pos = example.find(from);
    if(start_pos == std::string::npos) //does the sentence contain dishwasher?
        std::cout << "Cannot replace" << std::endl;
    else
        example.replace(start_pos, from.length(), "galaxy");

    std::cout << example << std::endl;

    return 0;
}