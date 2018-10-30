#include <iostream>

int main() {
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";

    int start_pos = url.find(from);
    if(start_pos == std::string::npos) //does the sentence contain dishwasher?
        std::cout << "Cannot replace" << std::endl;
    else
        url.replace(start_pos, from.length(), "odds");

    url.insert(5,":");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::cout << url << std::endl;
    return 0;
}