#include <iostream>
#include <fstream>

bool copyFile(std::string copyFrom, std::string copyTo) {
    std::ifstream fileFrom;
    std::ofstream fileTo;
    std::string line;
    fileFrom.open(copyFrom);
    fileTo.open(copyTo);
    if (fileFrom.is_open()) {
        while (getline(fileFrom, line)) {
            if (fileTo.is_open()) {
                fileTo << line << std::endl;
            } else {
                std::cout << "Can't open the donor file" << std::endl;
                return false;
            }
        }
    } else {
        std::cout << "Can't open the original file" << std::endl;
        return false;
    }
    fileTo.close();
    fileFrom.close();
    return true;
}

int main() {
    // Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
    // It should take the filenames as parameters
    // It should return a boolean that shows if the copy was successful

    copyFile("copyFrom.txt", "copyTo.txt");

    return 0;
}