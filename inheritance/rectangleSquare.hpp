#include <iostream>

using namespace std;

class rectangle
{
 public:
  rectangle(); //default constructor
  rectangle(double, double);
  double get_area() const;
  double get_perimeter() const;
 private:
  double length;
  double height;
};

class square : rectangle
{
 public:
  square(); //default constructor
  square(double);
  double get_area() const; // overriding rectangle's get_area()
  double get_perimeter() const; //overriding rectangles' get_perimeter()
};

