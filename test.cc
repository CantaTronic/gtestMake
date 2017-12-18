
#include <gtest/gtest.h>
#include "func.h"

/*A serie of a simplest tests ever*/

TEST (times, assoc) {
  EXPECT_EQ(times(3,4),times(4,3));
}

TEST (times, diff) {
  EXPECT_EQ(times(2,15),times(6,5));
}

TEST (times, base) {
  EXPECT_EQ(times(2,2),4);
}

TEST (times, wrong) {
  EXPECT_NE(times(2,2),5);
}

TEST (doubling, base) {
  EXPECT_EQ(doubling (5), 5*2);
}

TEST (doubling, timesEQ) {
  EXPECT_EQ(doubling (5), times(2,5));
}

TEST (doubling, less) {
  EXPECT_LT(doubling (5), times(3,5));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
