#ifndef TASK01_POSTIT_H
#define TASK01_POSTIT_H

#include <string>

class PostIt {
public:
    PostIt();

    const std::string &getBackgroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

    PostIt(const std::string &backgroundColor, const std::string &text, const std::string &textColor);

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //TASK01_POSTIT_H
