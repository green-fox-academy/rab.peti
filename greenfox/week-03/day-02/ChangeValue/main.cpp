#include <iostream>

int main() {
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float* ptrTemperature = &temperature;
    *ptrTemperature = 21.5;
    std::cout << *ptrTemperature << std::endl;
    return 0;
}