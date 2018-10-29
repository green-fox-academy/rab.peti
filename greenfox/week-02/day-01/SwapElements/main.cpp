#include <iostream>

int main() {
    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    std::string abc[] = {"first","second","third"};
    std::string substitute = abc[0];

    abc[0] = abc[2];
    abc[2] = substitute;

    return 0;
}