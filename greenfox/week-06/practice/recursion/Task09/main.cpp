#include <iostream>

std::string changer(std::string string, int i);
int main() {
    // Given a string, compute recursively a new string where all the
    // adjacent chars are now separated by a '*'.
    std::cout << changer("HelloWorld",1 );
    return 0;
}

std::string changer(std::string string, int i){
    if(i < string.size()) {
        string.insert(string.begin() + i, '*');
        return changer(string,i+=2);
    }else{
        return string;
    }
}