#include <gtest/gtest.h>
#include "ArrayList.h"

TEST(ArrayList, size)
{
    ArrayList a;
    EXPECT_EQ(a.size(), 0);
}