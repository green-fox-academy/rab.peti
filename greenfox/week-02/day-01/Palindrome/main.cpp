#include <iostream>

std::string reverse(std::string word)
{
    int size = word.length();
    std::string temp(word);
    char swap;
    for (int i = 0; i < (size/2)+1; ++i)
    {
        swap = word[i];
        temp[i] = temp[size-i-1];
        temp[size-i-1] = swap;
    }
    return temp;
}

std::string createPalindrome(std::string word)
{
    word += reverse(word);
    return word;
}

int main() {
    std::cout << createPalindrome("greenfox") << std::endl;
    return 0;
}