#include <iostream>


std::string changer(std::string string);
std::string changerRec(std::string string, std::string string2, int i, char x);

int main() {
    // Given a string, compute recursively (no loops) a new string where all the
    // lowercase 'x' chars have been changed to 'y' chars.

    std::cout << changerRec("xxxHelloxxx","asdfghkleqw", 0, 'x');


    return 0;
}

std::string changer(std::string string)
{
    char x = 'x';
    for (int i = 0; i < string.size(); ++i) {
        if(string[i] == x)
        {
            string[i] = 'y';
        }
    }
    return string;
}

std::string changerRec(std::string string, std::string string2, int i, char x)
{
    if(i < string.size()) {
        if (string[i] == x) {
            string2[i] = 'y';
            return changerRec(string,string2, ++i, 'x');
        } else {
            string2[i] = string[i];
            return changerRec(string,string2, ++i, 'x');
        }
    }else{
        return string2;
    }
}