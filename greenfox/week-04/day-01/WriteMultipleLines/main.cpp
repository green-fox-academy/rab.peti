#include <iostream>
#include <fstream>

void writeToFile(std::string path, std::string word, int number)
{
    std::ofstream myFile;
    myFile.open(path);
    if(myFile.is_open())
    {
        for (int i = 0; i < number; ++i) {
            myFile << word << std::endl;
        }
    }else std::cout << "Can't open the file" << std::endl;
}

int main() {
    // Create a function that takes 3 parameters: a path, a word and a number,
    // then it should write to a file.
    // The path parameter should describe the location of the file.
    // The word parameter should be a string, that will be written to the file as lines
    // The number parameter should describe how many lines the file should have.
    // So if the word is "apple" and the number is 5, than it should write 5 lines
    // to the file and each line should be "apple"

    writeToFile("myFile.txt", "apple", 5);

    return 0;
}