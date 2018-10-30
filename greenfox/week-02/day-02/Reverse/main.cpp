#include <iostream>

std::string reverse(const std::string& text)
{
    int size = text.length();
    std::string temp(text);
    char swap;
    for (int i = 0; i < (size/2)+1; ++i)
    {
        swap = text[i];
        temp[i] = temp[size-i-1];
        temp[size-i-1] = swap;
    }
   return temp;
   // std::cout << text.at(80) << std::endl; //81 char long string, 0-80
}

int main() {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::string word = "0123456789";
    char temp;
    int size = word.length();
    for (int i = 0; i < (size/2)+1; ++i)
    {
        temp = word[i];
        word[i] = word[size-i-1];
        word[size-i-1] = temp;
    }

    //std::cout << word.length();
    //std::cout << word;
    std::cout << reverse(reversed) << std::endl;
    return 0;
}