#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <vector>

using ::testing::ElementsAre;

TEST(SimpleTest, FirstTest) {
  EXPECT_EQ(1, 1);
  EXPECT_THAT(std::vector<int>{1, 2, 3, 4}, ElementsAre(1, 2, 3, 4));
}
