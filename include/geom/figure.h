#ifndef INCLUDE_GEOM_FIGURE_H_
#define INCLUDE_GEOM_FIGURE_H_

template <typename T>
struct Figure {
  virtual T area() const;
  virtual T perimeter() const;
};

#endif  // INCLUDE_GEOM_FIGURE_H_
