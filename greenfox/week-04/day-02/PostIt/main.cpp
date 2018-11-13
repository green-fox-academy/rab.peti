#include <iostream>
#include <vector>
#include "postIt.h"


int main() {
    PostIt postIt;
    PostIt postIt2("black","Hello!","orange");
    std::vector<PostIt> postIts;
    postIts.push_back(postIt);
    postIts.push_back(postIt2);

    for (int i = 0; i < postIts.size(); ++i) {
        std::cout << "BackgroundColor is: "<< postIts[i].getBackgroundColor() << "\t Text is: " << postIts[i].getText() << "\t TextColor is: " << postIts[i].getTextColor() << std::endl;
    }

    return 0;
}