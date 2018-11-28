#ifndef TASK02_BLOGPOST_H
#define TASK02_BLOGPOST_H

#include <string>

class BlogPost {
public:
    BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::string &publicationDate);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

public:

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //TASK02_BLOGPOST_H
