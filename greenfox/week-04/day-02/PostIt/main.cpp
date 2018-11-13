#include <iostream>
#include <vector>
#include "postIt.h"


int main() {
    // an orange with blue text: "Idea 1"
    // a pink with black text: "Awesome"
    // a yellow with green text: "Superb!"

    PostIt postIt("orange","Idea 1","blue");
    PostIt postIt2("pink","Awesome","black");
    PostIt postIt3("yellow","Superb!","green");
    std::vector<PostIt> postIts;
    postIts.push_back(postIt);
    postIts.push_back(postIt2);
    postIts.push_back(postIt3);

    for (int i = 0; i < postIts.size(); ++i) {
        std::cout << "BackgroundColor is: "<< postIts[i].getBackgroundColor() << "\t Text is: " << postIts[i].getText() << "\t TextColor is: " << postIts[i].getTextColor() << std::endl;
    }

    return 0;
}