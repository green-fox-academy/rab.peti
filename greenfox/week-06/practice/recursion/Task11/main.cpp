#include <iostream>

int factorio(int n);
int main() {
    // Create a recursive function called `refactorio`
    // that returns it's input's factorial
    std::cout << factorio(5) << std::endl;
    return 0;
}

int factorio(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else if(n > 1)
        return n * factorio(n-1);
    else
        return 0;
}