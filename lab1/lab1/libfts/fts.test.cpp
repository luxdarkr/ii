#include "fts.hpp"
#include "gtest/gtest.h"

TEST(Test, sum) { ASSERT_EQ(fts::sum(111, 245), 356); }