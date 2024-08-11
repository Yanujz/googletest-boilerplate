#include <gtest/gtest.h>
#include "example.h"


TEST(Example, sumTest)
{
    uint32_t a = 10;
    uint32_t b = 20;

    EXPECT_EQ(a + b, sum(a, b));
}

TEST(Example, squareTest)
{
    uint32_t a = 10;

    EXPECT_EQ(a * a, square(a));
}
