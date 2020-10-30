#include "Shape.hpp"
#ifndef _CONE_HPP_
#define _CONE_HPP_

class Cone : public Shape {
 private:
  float radius_;
  float height_;

 public:
  Cone(float radius, float height);
  auto volume() -> float;
  auto write(std::ostream& out) const -> std::ostream&;
};

std::ostream& operator<<(std::ostream& out, const Cone& s);

#endif
