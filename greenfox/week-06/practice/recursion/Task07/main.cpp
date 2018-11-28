#include <iostream>

std::string changer(std::string string, int i);
int main() {
    // Given a string, compute recursively (no loops) a new string where all the
    // lowercase 'x' chars have been changed to 'y' chars.
    std::cout << changer("xxxHelloxxx", 0);
    return 0;
}

std::string changer(std::string string, int i){
        if(i < string.size()) {
            if (string[i] == 'x') {
                string[i] = 'y';
                return changer(string, ++i);
            } else {
                return changer(string, ++i);
            }
        }else{
            return string;
        }
}