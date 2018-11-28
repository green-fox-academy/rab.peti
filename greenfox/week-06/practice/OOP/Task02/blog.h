#ifndef TASK02_BLOG_H
#define TASK02_BLOG_H

#include <vector>
#include "blogPost.h"

class Blog {
public:
    void addToList(BlogPost blogPost);
    void deletePost(int i);
    void update(int i, BlogPost blogPost);
    BlogPost getBlogPost(int i);
    int getBlogPostsSize();
private:
    std::vector<BlogPost> _blogPosts;
};


#endif //TASK02_BLOG_H
