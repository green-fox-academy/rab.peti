#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> filter(const std::vector<std::string> &list, const std::vector<std::string> &sweets) {
    int counter = 0;
    std::vector<std::string> tempList(list);
    std::vector<std::string> tempSweets(sweets);
    for (int i = 0; i < tempList.size(); ++i)
    {
        if ((std::find(tempSweets.begin(), tempSweets.end(), tempList[i])) != tempSweets.end())
        {
        }
        else
        {
            tempList.erase(tempList.begin() + i);
            --i;
        }
    }
    return tempList;
}

int main() {

    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the list as a parameter.

    // Expected output: Cupcake Brownie
    for (const auto &sweet : filter(list, sweets)) {
        std::cout << sweet << " ";
    }
    return 0;
}