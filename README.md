
# Volume Finder
 
The program is run from the command line. The included Makefile shall build the program named `volume-finder`. The `volume-finder` program takes one command line argument which is a filename. The program opens the specified file and reads the contents. The file defines a volume that is either a right circular (cone)[https://en.wikipedia.org/wiki/Cone], a right circular [cylinder](https://en.wikipedia.org/wiki/Cylinder), or a [sphere](https://en.wikipedia.org/wiki/Sphere).

First the program initializes it's internal data structures depending on what type of volume is defined in the input file. For example, if the input file specifies a cone, then a Cone object is allocated on the heap using the `new` keyword. Data from the file is used to initialize the object. Since you don't know what is defined in the input file, the pointer variable in `main( )` shall be of type `Shape`. (This means that the Cone, Cylinder, and Sphere classes must inherit from Shape.)

Once the object is initialized, calculate the volume of the shape and print out a report to the terminal (see Example Output below).

Overload the `<<` operator for each type of shape similar to the previous lab exercise.

