#include <iostream>
#include <vector>
#include <algorithm>


std::vector<std::string> quoteSwap(std::vector<std::string> quote)
{
    std::string temp = "";

    temp = quote[2];
    quote[2] = quote[5];
    quote[5] = temp;

    for (int i = 0; i < quote.size(); ++i) {
        std::cout << quote[i] << " ";
    }
    return quote;
}

int main() {
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};
    quoteSwap(quote);


    // What I cannot create, I do not understand.
    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    return 0;
}