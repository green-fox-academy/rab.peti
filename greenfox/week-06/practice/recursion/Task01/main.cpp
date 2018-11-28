#include <iostream>

int countDown(int i);
int main() {
    // Write a recursive function that takes one parameter: n and counts down from n.
    countDown(5);
    return 0;
}

int countDown(int i){
    if(i >= 0) {
        std::cout << i << " | ";
        return countDown(i - 1);
    }
}