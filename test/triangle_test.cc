#include "gtest/gtest.h"
#include "geom/point.h"
#include "geom/triangle.h"

using Pd = Point<double>;
using Td = Triangle<double>;

TEST(CPPLib, TriangleCreate) {
  Pd p1(-1.0, 0.0);
  Pd p2(1.0, 0.0);
  Pd p3(0.0, 1.0);

  Td t(p1, p2, p3);

  ASSERT_EQ(t[0], p1);
  ASSERT_EQ(t[1], p2);
  ASSERT_EQ(t[2], p3);
}

TEST(CPPLib, TriangleArea) {
  Pd p1(-1.0, 0.0);
  Pd p2(1.0, 0.0);
  Pd p3(0.0, 1.0);

  Td t(p1, p2, p3);

  ASSERT_EQ(t.area(), 1.0);
}
