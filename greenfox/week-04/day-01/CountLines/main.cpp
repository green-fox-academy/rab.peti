#include <iostream>
#include <fstream>

int countLines(std::string fileName) {
    std::ifstream myFile;
    std::string line;
    myFile.open(fileName);
    int counter = 0;
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            ++counter;
        }
        myFile.close();
        return counter;
    } else return 0;
}

int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::cout << countLines("myFile.txt");

    return 0;
}