
#include "Shape.hpp"

#ifndef _SPHERE_HPP_
#define _SPHERE_HPP_

class Sphere : public Shape {
 private:
  float radius_;

 public:
  Sphere(float radius);
  auto write(std::ostream& out) const -> std::ostream&;
  auto volume() -> float;
};

std::ostream& operator<<(std::ostream& out, const Sphere& s);

#endif
