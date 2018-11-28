#include <iostream>

std::string changer(std::string string, int i);
int main() {
    // Given a string, compute recursively a new string where all the 'x' chars have been removed.
    std::cout << changer("xxxHelxloxxx",0);
    return 0;
}

std::string changer(std::string string, int i){
    if(i < string.size()) {
        if (string[i] == 'x') {
            string.erase(string.begin()+i);
            return changer(string, i);
        } else {
            return changer(string, ++i);
        }
    }else{
        return string;
    }
}