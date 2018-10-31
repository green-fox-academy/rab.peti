#include <iostream>
#include <vector>
#include <algorithm>

int calculate(std::string input)
{
    std::string kid(input);
    char space(' ');
    std::string operation("");
    int operand1(0);
    std::string operand1Length("");
    int operand2(0);
    std::string operand2Length("");
    int result = 0;
    std::size_t pos(0);

    std::cout << kid.size() << std::endl;
    std::cout << kid << std::endl;

    for (int j = 0; j < kid.size(); ++j)
    {
        if((std::find(kid.begin(),kid.end(),space)) != kid.end())
        {
            if(operation == "")
            {
                operation = kid.substr(j, j+1);
            }
            else if(operand1 == 0)
            {
                operand1 = std::stoi(kid.substr(j));
                std::cout <<"\nI'm the size:\t"<< kid.substr(j);
                j++;
            }
            else if(operand2 == 0)
            {
                operand2 = std::stoi(kid.substr(j));
                std::cout <<"\nI'm the size2:\t"<< kid.substr(j);
            }
        }
    }

    /*
    for (int i = 0; i < kid.size(); ++i)
    {
        if(kid[i] != space && operation == "")
        {
            operation = kid.substr(i, i+1);
        }
        else if(kid[i] != space && operand1 == 0)
        {
            //operand1Length = kid.substr(i);
           // pos = operand1Length.find(" ");
            operand1 = std::stoi(kid.substr(i));
            std::cout <<"I'm the size:"<< kid.substr(i);
        }
        else if(kid[i] != space && operand2 == 0)
        {
            operand2 = std::stoi(kid.substr(i));
            std::cout <<"\nI'm the size2:"<< kid.substr(i);
        }
    }
     */

    std::cout <<"\nI'm the operation:\t" << operation << "\nI'm the operand1:\t" << operand1 << "\nI'm the operand2:\t" << operand2 << std::endl;

    if(operation == "+")
    {
        return result = operand1 + operand2;
    }
    else if(operation == "-")
    {
        return result = operand1 - operand2;
    }
    else if(operation == "*")
    {
        return result = operand1 * operand2;
    }
    else if(operation == "/")
    {
        return result = operand1 / operand2;
    }
    else if(operation == "%")
    {
        return result = operand1 % operand2;
    }

    /*
    switch(operation)
    {
        case "+" : std::cout << '1';
            break;
        case "-" : std::cout << '2';
            break;
        case "*" : std::cout << '1';
            break;
        case "/" : std::cout << '2';
            break;
        case "%" : std::cout << '2';
            break;
    }
    */
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

    std::string input = "";
    std::cout << "Please type in the expression:";
    getline(std::cin, input);

    std::cout << calculate(input);


    return 0;
}