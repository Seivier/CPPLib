#ifndef INCLUDE_GEOM_POINT_H_
#define INCLUDE_GEOM_POINT_H_
#include <ostream>

template <typename T>
class Point {
 public:
  inline const T& x() const { return x_; }
  inline const T& y() const { return y_; }

  Point<T>& operator=(const Point<T>& other) {
    x_ = other.x();
    y_ = other.y();
  }

 private:
  T x_, y_;
};

#endif  // INCLUDE_GEOM_POINT_H_
