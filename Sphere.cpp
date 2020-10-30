
#include "Sphere.hpp"

Sphere::Sphere(float radius) : Shape{3}, radius_{radius} {}

auto Sphere::write(std::ostream& out) const -> std::ostream& {
  out << "Sphere(radius=" << radius_ << ")";
  return out;
}

auto Sphere::volume() -> float {
  return (4.0 / 3.0) * PI * (radius_ * radius_ * radius_);
}

std::ostream& operator<<(std::ostream& out, const Sphere& s) {
  return s.write(out);
}
