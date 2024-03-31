
#include "geom/point.h"

#include "gtest/gtest.h"

TEST(CPPLib, PointCreate) {
  Point<double> p1(3.0, 5.0);

  ASSERT_EQ(p1.x(), 3.0);
  ASSERT_EQ(p1.y(), 5.0);
}
