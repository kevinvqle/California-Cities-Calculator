
#include <iostream>

#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

extern const float PI;

class Shape {
 private:
  int shape_type_;

 public:
  Shape(int shape_type);
  auto getShapeType() const -> int;
  // This is a pure virtual method
  virtual auto volume() -> float = 0;
  // This is a virtual method
  virtual auto write(std::ostream& out) const -> std::ostream&;
};

std::ostream& operator<<(std::ostream& out, const Shape& s);

#endif
