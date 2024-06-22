#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MockUser.h"

int add(int a, int b) {
    return a + b;
}

TEST(testCase, should_3_when_given_2_add_1) {
    EXPECT_EQ(add(2, 1), 3);
    EXPECT_EQ(add(2, 2), 4);
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(2, 4), 8) << "2 + 4 != 8\n";
    EXPECT_EQ(add(2, 6), 8);
    EXPECT_EQ(add(2, 7), 9);
}

TEST(testCase3, test) {
    MockUser user;
    EXPECT_CALL(user, getAge).
    Times(::testing::AtLeast(3)).
    WillOnce(::testing::Return(200)).
    WillOnce(::testing::Return(300)).
    WillRepeatedly(::testing::Return(500));

    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
}
