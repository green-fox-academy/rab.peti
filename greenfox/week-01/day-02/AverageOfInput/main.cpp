#include <iostream>

int main() {
    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int number5 = 0;
    std::cout << "Please give me 5 number: ";
    std::cin >> number1;
    std::cin >> number2;
    std::cin >> number3;
    std::cin >> number4;
    std::cin >> number5;
    int sum = number1+number2+number3+number4+number5;
    int avg = sum / 5;
    std::cout <<"The sum of the numbers: " << sum <<  std::endl <<" The average of the numbers: " << avg << std::endl;
    return 0;
}