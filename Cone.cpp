
#include "Cone.hpp"

Cone::Cone(float radius, float height)
    : Shape{1}, radius_{radius}, height_{height} {}

auto Cone::write(std::ostream& out) const -> std::ostream& {
  out << "Cone(radius=" << radius_ << ", height=" << height_ << ")";
  return out;
}

auto Cone::volume() -> float {
  return (1.0 / 3.0) * PI * (radius_ * radius_ * height_);
}

std::ostream& operator<<(std::ostream& out, const Cone& s) {
  return s.write(out);
}
