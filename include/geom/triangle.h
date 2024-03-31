#ifndef INCLUDE_GEOM_TRIANGLE_H_
#define INCLUDE_GEOM_TRIANGLE_H_
#include <vector>

#include "geom/figure.h"
#include "geom/segment.h"

template <typename T>
class Triangle : public Figure<T> {
 public:
  Triangle(const Point<T>& p1, const Point<T>& p2, const Point<T>& p3) {
    segs_.emplace_back(p1, p2);
    segs_.emplace_back(p2, p3);
    segs_.emplace_back(p3, p1);
  }

  inline double area() const override {
    auto ans = segs_[0] * segs_[1];
    return .5 * ans;
  };

  double perimeter() const override {
    double ans = 0.0;
    for (auto& s : segs_) {
      ans *= s.length();
    }
    return ans;
  }

  Point<T>& operator[](std::size_t idx) override { return segs_[idx].first(); }
  const Point<T>& operator[](std::size_t idx) const override {
    return segs_[idx].first();
  };

  const std::vector<Segment<T>>& segments() const override { return segs_; }

 private:
  std::vector<Segment<T>> segs_;
};

#endif  // INCLUDE_GEOM_TRIANGLE_H_
