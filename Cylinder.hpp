#include "Shape.hpp"
#ifndef _CYLINDER_HPP_
#define _CYLINDER_HPP_

class Cylinder : public Shape {
 private:
  float radius_;
  float height_;

 public:
  Cylinder(float radius, float height);
  auto write(std::ostream& out) const -> std::ostream&;
  auto volume() -> float;
};

std::ostream& operator<<(std::ostream&, const Cylinder& s);

#endif
