#include <iostream>
#include <vector>
#include <map>


int main() {
    std::string out = "";
    std::vector<int> notSoCrypticMessage = {1, 12, 1, 2, 11, 1, 7, 11, 1, 49, 1, 3, 11, 1, 50, 11};

    std::map<int, std::string> map;

    map[7] = "run around and desert you";
    map[50] = "tell a lie and hurt you ";
    map[49] = "make you cry, ";
    map[2] = "let you down";
    map[12] = "give you up, ";
    map[1] = "Never gonna ";
    map[11] = "\n";
    map[3] = "say goodbye ";

/*
 * GOING THROUGH THE WHOLE MAP AND PRINTING IT
    for (std::map<int,std::string>::iterator it = map.begin();it != map.end();it++)
    {
        std::cout << it->first << " - " << it->second << std::endl;
    }
    */

    for (int i = 0; i < notSoCrypticMessage.size(); ++i)
    {
        std::map<int,std::string>::iterator it = map.find(notSoCrypticMessage[i]);
        out += it->second;
    }
    // Things are a little bit messed up
    // Your job is to decode the notSoCrypticMessage by using the map as a look up table
    // Assemble the fragments into the out variable

    std::cout << out << std::endl;
    return 0;
}