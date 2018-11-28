#include <iostream>
#include "postIt.h"
int main() {
    // Create a PostIt class that has
    // a backgroundColor
    // a text on it
    // a textColor
    // Create a few example post-it objects:
    // an orange with blue text: "Idea 1"
    // a pink with black text: "Awesome"
    // a yellow with green text: "Superb!"
    PostIt postIt1;
    PostIt postIt2("orange","Idea 1", "blue");
    PostIt postIt3("pink","Awesome","black");
    PostIt postIt4("yellow","Superb!","green");

    std::cout << "a(n) " << postIt1.getBackgroundColor() << " with " << postIt1.getTextColor() << " text: \"" << postIt1.getText() << "\"" << std::endl;
    std::cout << "a(n) " << postIt2.getBackgroundColor() << " with " << postIt2.getTextColor() << " text: \"" << postIt2.getText() << "\"" << std::endl;
    std::cout << "a(n) " << postIt3.getBackgroundColor() << " with " << postIt3.getTextColor() << " text: \"" << postIt3.getText() << "\"" << std::endl;
    std::cout << "a(n) " << postIt4.getBackgroundColor() << " with " << postIt4.getTextColor() << " text: \"" << postIt4.getText() << "\"" << std::endl;

    return 0;
}