#include <iostream>
#include <fstream>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile;
    myFile.open("myFile.txt");
    if(myFile.is_open())
    {
        myFile << "Peter Rab" << std::endl;
    }else std::cout << "Can't open the file" << std::endl;

    return 0;
}