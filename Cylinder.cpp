#include "Cylinder.hpp"

Cylinder::Cylinder(float radius, float height)
    : Shape{2}, radius_{radius}, height_{height} {}

auto Cylinder::write(std::ostream& out) const -> std::ostream& {
  out << "Cylinder(radius=" << radius_ << ","
      << "height=" << height_ << ")";
  return out;
}

auto Cylinder::volume() -> float { return PI * radius_ * radius_ * height_; }

std::ostream& operator<<(std::ostream& out, const Cylinder& s) {
  return s.write(out);
}
