#include <gtest/gtest.h>
#include "Calc/Calc.h"

TEST(SquareTest, PositiveNos)
{
  ASSERT_EQ(1, Calc::square(1));
  ASSERT_EQ(4, Calc::square(2));
  ASSERT_EQ(9, Calc::square(3));
  ASSERT_EQ(16, Calc::square(4));
}

TEST(SquareTest, NegativeNos)
{
  ASSERT_EQ(1, Calc::square(-1));
  ASSERT_EQ(4, Calc::square(-2));
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}