#include <iostream>

int main() {
    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string myName = "Peter Rab";
    int myAge = 21;
    double myHeightInMeters = 2.05;
    bool Married = false;

    //if you want boolean to write false/true instead of 0/1 type std::boolalpha before writing it to the console
    std::cout << myName << "\n" << myAge << " years old\n" << myHeightInMeters << " Meters\n" << std::boolalpha << Married << std::endl;
    return 0;
}