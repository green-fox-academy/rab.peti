#include <iostream>

int main() {
    double massInKg = 81.2;
    double heightInM = 1.78;

    // Print the Body mass index (BMI) based on these values

    std::cout << "Your BMI is: " << massInKg/(heightInM*heightInM) << std::endl;
    return 0;
}