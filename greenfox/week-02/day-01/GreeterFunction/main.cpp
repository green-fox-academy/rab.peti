#include <iostream>

void greet(std::string name)
{
    std::cout << "Greetings dear, " << name << "!" << std::endl;
}

int main() {
        // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    std::string al = "Greenfox";
    greet(al);
    
    return 0;
}