
#ifndef GTEST_GMOCK_MOCKUSER_H
#define GTEST_GMOCK_MOCKUSER_H

#include "User.h"
#include <gmock/gmock.h>
class MockUser: public User{
public:
    MOCK_METHOD(int, getAge, (), (override));
};

#endif  // GTEST_GMOCK_MOCKUSER_H
