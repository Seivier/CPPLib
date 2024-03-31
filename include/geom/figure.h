#ifndef INCLUDE_GEOM_FIGURE_H_
#define INCLUDE_GEOM_FIGURE_H_

#include <cstddef>
#include <vector>

#include "geom/point.h"
#include "geom/segment.h"

template <typename T>
struct Figure {
  virtual double area() const = 0;
  virtual double perimeter() const = 0;

  virtual Point<T>& operator[](std::size_t idx) = 0;
  virtual const Point<T>& operator[](std::size_t idx) const = 0;

  virtual const std::vector<Segment<T>>& segments() const = 0;
};

#endif  // INCLUDE_GEOM_FIGURE_H_
