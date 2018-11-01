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

bool isAnagram(std::string wordOne, std::string wordTwo)
{
    if(reverse(wordOne) == wordTwo)
        return true;
    else
        return false;
}
int main() {

    std::cout << reverse("olleH") << std::endl;
    std::cout << std::boolalpha << isAnagram("dog","god");
    std::cout << std::boolalpha << isAnagram("dog","god");
    return 0;
}