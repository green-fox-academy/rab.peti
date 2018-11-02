#include <iostream>
#include <vector>

std::vector<int> bubbleSort(std::vector<int> &list, int size)
{
    bool swapped = false;
    for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-i-1; ++j) {
            if(list[j] > list[j+1])
            {
                std::swap(list[j], list[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    return list;
}

int main() {
    //  Create a function that takes a list of numbers as parameter
    //  Don't forget you have to pass the size of the list as a parameter as well
    //  Returns a list where the elements are sorted in ascending numerical order by using bubble sort
    //  Make a second boolean parameter, if it's `true` sort that list descending

    std::vector<int> numbers = {6,5,3,1,8,7,2,4};
    int size = numbers.size();

    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i];
    }

    for (int i = 0; i < size; ++i) {
        std::cout << bubbleSort(numbers, size)[i];
    }

    return 0;
}