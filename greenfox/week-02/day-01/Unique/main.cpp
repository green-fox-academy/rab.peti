#include <iostream>
#include <vector>
#include <algorithm>


void unique(int numbers[], int size) {
    std::vector<int> result;
    for (int i = 0; i < size; ++i) {
        if ((std::find(result.begin(), result.end(), numbers[i])) != result.end()) {

        } else {
            result.push_back(numbers[i]);
        }
    }
    for (int j = 0; j < result.size(); ++j) {
        std::cout << result[j] << " ";
    }
    std::cout << "\n";
}

int main() {
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have to pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};

    int size = sizeof(numbers) / sizeof(numbers[0]);


    unique(numbers, size);


    //std::string name = "RabPeter";
    //std::cout << name.length() << std::endl;
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`
    return 0;
}