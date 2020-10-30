// Kevin Le
// CPSC 121-04
// 2020-10-10
// kevin.lelele@csu.fullerton.edu
//
// This is a program to find the volume of a cone, cylinder, and sphere by using
//
// their respective formulas and gives the user the outputs.

#include <cmath>
#include <fstream>
#include <iostream>

#include "Cone.hpp"
#include "Cylinder.hpp"
#include "Shape.hpp"
#include "Sphere.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cerr << "Please provide an input volume file. Exiting.\n";
    return 1;
  }

  ifstream input_file;

  input_file.open(argv[1], ios::in);
  if (!input_file.is_open()) {
    cerr << "Couldn't open " << argv[1] << "; exiting\n";
    exit(1);
  }

  Shape* my_shape = nullptr;
  int shape_type;
  float radius = NAN;
  float height = NAN;
  input_file >> shape_type;
  switch (shape_type) {
    case 1:
      // Cone
      input_file >> radius >> height;
      my_shape = new Cone(radius, height);
      // return 1;
      break;
    case 2:
      // Cylinder
      input_file >> radius >> height;
      my_shape = new Cylinder(radius, height);
      // return 1;
      break;
    case 3:
      // Sphere
      input_file >> radius;
      my_shape = new Sphere(radius);
      // return 1;
      break;
  };
  input_file.close();
  cout << *my_shape << " has a volume of " << my_shape->volume() << endl;
  return 0;
}
