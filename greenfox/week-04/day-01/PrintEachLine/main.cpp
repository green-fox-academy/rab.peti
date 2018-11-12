#include <iostream>
#include <fstream>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myFile;
    std::string line;
    myFile.open ("myFile.txt");
    if (myFile.is_open())
    {
        while (getline(myFile,line))
        {
            std::cout << line << '\n';
        }
        myFile.close();
    }

    else std::cout << "Unable to open file";

    return 0;
}