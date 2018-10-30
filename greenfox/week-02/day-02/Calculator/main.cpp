#include <iostream>
#include <vector>
#include <algorithm>

int calculate()
{
    std::string kid("* 3 4");
    char space(' ');
    std::string operation("");
    int operand1(0);
    int operand2(0);

    std::cout << kid.size() << std::endl;
    for (int i = 0; i < kid.size(); ++i)
    {
        if(kid[i] != space && operation == "")
        {
            operation = kid[i];
        }
        else if(kid[i] != space && operand1 == 0)
        {
            std::cout << "\ni-edik elem: " << kid[i];
            operand1 = kid[i];
        }
        else if(kid[i] != space && operand2 == 0)
        {
            std::cout << "\ni-edik elem2: " << kid[i];
            operand2 = kid[i];
        }
    }
    std::cout << kid;
    std::cout <<"\nI'm the operation: " << operation << "\nI'm the operand1: " << operand1 << "\nI'm the operand2: " << operand2 << std::endl;
}

int main() {
    // Create a simple calculator application which reads the parameters from the prompt
    // and prints the result to the prompt.
    // It should support the following operations,
    // create a method named "calculate()":
    // +, -, *, /, % and it should support two operands.
    // The format of the expressions must be: {operation} {operand} {operand}.
    // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)


    // It should work like this:
    // Start the program
    // It prints: "Please type in the expression:"
    // Waits for the user input
    // Print the result to the prompt
    // Exit
/*
    std::string input = "";
    std::cout << "Please type in the expression:";
    std::cin >> input;
*/
    calculate();


    return 0;
}