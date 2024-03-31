#ifndef INCLUDE_GEOM_SEGMENT_H_
#define INCLUDE_GEOM_SEGMENT_H_
#include <cmath>
#include <iostream>
#include <ostream>

#include "geom/point.h"

template <typename T>
class Segment {
 public:
  Segment(const Point<T>& first, const Point<T>& second)
      : f_(first), s_(second) {}
  Segment() : f_(), s_() {}

  Segment(const Segment<T>& seg) : Segment(seg.first(), seg.second()) {}

  inline const Point<T>& first() const { return f_; }
  inline const Point<T>& second() const { return s_; }
  double length() const {
    Point<T> v = second() - first();
    return std::sqrt(v.x() * v.x() + v.y() * v.y());
  }
  inline Point<T>& first() { return f_; }
  inline Point<T>& second() { return s_; }

  double operator*(const Segment<T>& other) const {
    auto v1 = second() - first();
    auto v2 = other.second() - other.first();
    return v1.x() * v2.y() - v1.y() * v2.x();
  }

 private:
  Point<T> f_, s_;
};

#endif  // INCLUDE_GEOM_SEGMENT_H_
