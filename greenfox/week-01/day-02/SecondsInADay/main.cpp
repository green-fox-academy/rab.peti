#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int remainingHours = 24 - currentHours;
    int remainingMinutes = 60 - currentMinutes;
    int remainingSeconds = 60 - currentSeconds;

    std::cout << "Remaining time from a day in seconds: " << (remainingHours*3600)+(remainingMinutes*60)+remainingSeconds << " sec" << std::endl;
    return 0;
}