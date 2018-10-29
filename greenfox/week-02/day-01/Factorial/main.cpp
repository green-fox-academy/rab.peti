#include <iostream>


int factorio(int inputNumber)
{
    int eredmeny = 1;
    int szamlalo = inputNumber;
    if(inputNumber < 1)
    {
        std::cout << "Give me a higher number!" << std::endl;
        return 0;
    }
    else
    {
        for (int i = 1; i < inputNumber; ++i) {
            eredmeny *= szamlalo;
            --szamlalo;
        }
        return eredmeny;
    }
}

int main() {
    // - Create a function called `factorio`
    //   that returns it's input's factorial

    int input = 0;
    std::cout << "Give me a number you want to get the factorial of:  ";
    std::cin >> input;
    std::cout << factorio(input) << std::endl;

    return 0;
}