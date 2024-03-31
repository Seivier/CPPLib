#ifndef INCLUDE_GEOM_POINT_H_
#define INCLUDE_GEOM_POINT_H_
#include <ostream>

template <typename T>
class Point {
 public:
  Point(T x, T y) : x_(x), y_(y) {}
  Point() : Point(0, 0) {}
  Point(const Point& p) : x_(p.x()), y_(p.y()) {}

  inline const T& x() const { return x_; }
  inline const T& y() const { return y_; }

  Point<T>& operator=(const Point<T>& other) {
    x_ = other.x();
    y_ = other.y();
  }

  Point<T>& operator*=(T factor) {
    x_ *= factor;
    y_ *= factor;
  }

  Point<T>& operator+=(const Point<T>& other) {
    x_ += other.x();
    y_ += other.y();
  }

  Point<T>& operator-=(const Point<T>& other) {
    x_ -= other.x();
    y_ -= other.y();
  }

  inline bool operator==(const Point<T>& other) const {
    return x() == other.x() && y() == other.y();
  }

  inline bool operator!=(const Point<T>& other) const {
    return x() != other.x() || y() != other.y();
  }

  friend std::ostream& operator<<(std::ostream& os, const Point<T>& p) {
    os << "Point{" << p.x() << ", " << p.y() << ", "
       << "}";
    return os;
  }

 private:
  T x_, y_;
};

#endif  // INCLUDE_GEOM_POINT_H_
