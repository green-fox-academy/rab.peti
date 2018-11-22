#include <gtest/gtest.h>
#include <vector>
#include "apple.h"

std::vector<int> elements = {1,1,1,1,1};
std::vector<int> elements_empty = {};
std::vector<int> element = {5};
std::vector<int> elements_negative = {-5,1,1,1,1};

TEST(apple_check, test_apple){
    ASSERT_EQ(getApple(), "apple");
}

TEST(apple_check, test_sum){
    ASSERT_EQ(sum(elements), 5);
}

TEST(apple_check, test_empty){
    ASSERT_EQ(sum(elements_empty), 0);
}

TEST(apple_check, test_element){
    ASSERT_EQ(sum(element), 5);
}

TEST(apple_check, test_negative){
    ASSERT_EQ(sum(elements_negative), -1);
}

