#include "gtest/gtest.h"

#include "src/greeting.h"

TEST(GreetingTest, Greet) {
  EXPECT_EQ(Greet("Bazel"), "Hello, Bazel!");
}
