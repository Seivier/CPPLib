#ifndef INCLUDE_GEOM_SEGMENT_H_
#define INCLUDE_GEOM_SEGMENT_H_
#include <cmath>

#include "point.h"

template <typename T>
class Segment {
 public:
  Segment(const Point<T>& first, const Point<T>& second)
      : f_(first), s_(second) {}
  Segment() : f_(), s_() {}

  inline const Point<T>& first() const { return f_; }
  inline Point<T>& first() { return f_; }
  double length() const;

 private:
  Point<T> f_, s_;
};

#endif  // INCLUDE_GEOM_SEGMENT_H_
