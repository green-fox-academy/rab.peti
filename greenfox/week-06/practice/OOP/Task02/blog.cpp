#include "blog.h"

void Blog::addToList(BlogPost blogPost) {
    _blogPosts.push_back(blogPost);
}

void Blog::deletePost(int i) {
    _blogPosts.erase(_blogPosts.begin()+i);
}

void Blog::update(int i, BlogPost blogPost) {
    _blogPosts.insert(_blogPosts.begin()+i, blogPost);
}

BlogPost Blog::getBlogPost(int i) {
    return _blogPosts[i];
}

int Blog::getBlogPostsSize() {
    return _blogPosts.size();
}
