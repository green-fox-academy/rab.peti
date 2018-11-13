#include <iostream>
#include <vector>
#include "blogPost.h"

int main() {
    BlogPost blogPost("John Doe", "Lorem Ipsum","Lorem ipsum dolor sit amet.","2000.05.04.");
    BlogPost blogPost2("Tim Urban", "Wait but why","A popular long-form, stick-figure-illustrated blog about almost everything.","2010.10.10.");
    BlogPost blogPost3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump","Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.","2017.03.28.");

    std::vector<BlogPost> blogPosts;

    blogPosts.push_back(blogPost);
    blogPosts.push_back(blogPost2);
    blogPosts.push_back(blogPost3);

    for (int i = 0; i < blogPosts.size(); ++i) {
        std::cout <<"\n\""<< blogPosts[i].getTitle() << "\" titled by " << blogPosts[i].getAuthorName() << " posted at \"" << blogPosts[i].getPublicationDate() << "\"\n\t" << blogPosts[i].getText() << std::endl;
    }
    return 0;
}