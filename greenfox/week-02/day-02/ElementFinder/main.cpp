#include <iostream>
#include <vector>
#include <algorithm>

std::string containsSeven(const std::vector<int>& numbers)
{
    int counter = 0;
    int sevenCounter = 0;
    bool contains = false;
    for (int i = 0; i < numbers.size(); ++i)
    {
        if(numbers[i] == 7)
        {
            contains = true;
            sevenCounter++;
        }
        else
        {
            if(counter == 0)
            {
                counter++;
            }
            else
            {
            }
        }
    }
    if(contains == true)
    {
        //std::cout << sevenCounter << std::endl; if you want to print out how many "7"s are there in the vector
        return "Hoorray";
    }
    else if(contains == false)
    {
        return "Noooooo";
    }
}

std::string containsSeven_stdfind(const std::vector<int>& numbers)
{
    if((std::find(numbers.begin(),numbers.end(), 7)) != numbers.end())
    {
        return "Hoorray";
    }
    else
    {
        return "Noooooo";
    }
}


int main() {
    const std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Write a method that checks if the arrayList contains "7" if it contains return "Hoorray" otherwise return "Noooooo"
    // The output should be: "Noooooo"
    // Do this with 2 different solutions. First should iterate through the vector and check every element one by one and the second should use std::find

    // Expected output: "Noooooo"
    std::cout << containsSeven(numbers) << std::endl;
    // Expected output: "Noooooo"
    std::cout << containsSeven_stdfind(numbers) << std::endl;
    return 0;
}