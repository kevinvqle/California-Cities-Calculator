
#include "Shape.hpp"

const float PI = 3.14159265358979323846;

Shape::Shape(int shape_type) : shape_type_{shape_type} {}

auto Shape::getShapeType() const -> int { return shape_type_; }

auto Shape::write(std::ostream& out) const -> std::ostream& {
  out << "You shouldn't see this; this is Shape::write( ).\n";
  return out;
}

std::ostream& operator<<(std::ostream& out, const Shape& s) {
  return s.write(out);
}
