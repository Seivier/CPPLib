#ifndef INCLUDE_GEOM_SEGMENT_H_
#define INCLUDE_GEOM_SEGMENT_H_
#include <cmath>

#include "point.h"

template <typename T>
class Segment {
 public:
  Segment(const Point<T>& first, const Point<T>& second)
      : f_(first), s_(second) {
    update_length();
  }
  Segment() : f_(), s_(), length_(0) {}

  inline const Point<T>& first() const { return f_; }
  inline const Point<T>& second() const { return s_; }
  inline double length() const { return length_; }
  inline void first(const Point<T>& p) const {
    f_ = p;
    update_length();
  }

 private:
  Point<T> f_, s_;
  double length_;
  void update_length() {
    Point<T> v = first() - second();
    length_ = std::sqrt<double>(v.x() * v.x() + v.y() * v.y());
  }
};

#endif  // INCLUDE_GEOM_SEGMENT_H_
