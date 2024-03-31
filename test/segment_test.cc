#include "gtest/gtest.h"

#include "geom/segment.h"

TEST(CPPLib, SegmentCreate) {
  Point<double> p1(1.0, 2.0);
  Point<double> p2(-3.0, 5.0);
  Segment s(p1, p2);

  ASSERT_EQ(s.first(), p1);
  ASSERT_EQ(s.second(), p2);
  ASSERT_EQ(s.length(), 5.0);
}

TEST(CPPLib, SegmentSetter) {
  Point<double> p1(1.0, 2.0);
  Point<double> p2(-3.0, 5.0);
  Point<double> p3(-4.0, -10.0);
  Segment s(p1, p2);

  s.second() = p3;

  ASSERT_EQ(s.first(), p1);
  ASSERT_EQ(s.second(), p3);
  ASSERT_EQ(s.length(), 13.0);
}
