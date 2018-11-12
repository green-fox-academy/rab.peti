#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<std::string> uniqueIPAdresses(std::string fileName);
float getPostRatio(std::string fileName);


int main() {
    // Read all data from 'log.txt'.
    // Each line represents a log message from a web server
    // Write a function that returns an array with the unique IP adresses.
    // Write a function that returns the GET / POST request ratio.

    for (int i = 0; i < uniqueIPAdresses("log.txt").size(); ++i) {  /// write out the IP addresses
        std::cout << uniqueIPAdresses("log.txt")[i] << std::endl;
    }
    std::cout << getPostRatio("log.txt"); /// write out the ratio
    return 0;
}

std::vector<std::string> uniqueIPAdresses(std::string fileName)
{
    std::ifstream myFile;
    std::string line;
    myFile.open(fileName);
    if(myFile.is_open())
    {
        std::string day;
        std::string month;
        std::string date;
        std::string time;
        int year;
        std::string IP;
        std::string GET_POST;
        std::string slash;

        std::vector<std::string> IPaddresses;
        std::vector<std::string> uniqueIPaddresses;

        while(myFile >> day >> month >> date >> time >> year >> IP >> GET_POST >> slash){
            IPaddresses.push_back(IP);
        }
        for (int j = 0; j < IPaddresses.size(); ++j) {
            if((std::find(uniqueIPaddresses.begin(),uniqueIPaddresses.end(), IPaddresses[j])) != uniqueIPaddresses.end())
            {

            }
            else
            {
                uniqueIPaddresses.push_back(IPaddresses[j]);
            }
        }
        return uniqueIPaddresses;
    }
    else std::cout << "Can't open file" << std::endl;
}
float getPostRatio(std::string fileName)
{
    std::ifstream myFile;
    std::string line;
    myFile.open(fileName);
    if(myFile.is_open()) {
        std::string day;
        std::string month;
        std::string date;
        std::string time;
        int year;
        std::string IP;
        std::string GET_POST;
        std::string slash;
        float getCounter = 0;
        int postCounter = 0;

        while (myFile >> day >> month >> date >> time >> year >> IP >> GET_POST >> slash) {
            if (GET_POST == "GET") {
                ++getCounter;
            } else if (GET_POST == "POST") {
                ++postCounter;
            }
        }
        return getCounter/postCounter;
    }
    else std::cout << "Can't open file" << std::endl;
}