#include "rectangleSquare.hpp"
#include <iostream>

rectangle::rectangle()
{
  length = 1.0;
  height = 1.0;
}

rectangle::rectangle(double l, double h)
{
  length = l;
  height = h;
}

double rectangle::get_area() const
{
  return length * height;
}

double rectangle::get_perimeter() const
{
  return 2 * (length + height);
}

/*---------------------------------------------------------------------
Square's member functions implementations
---------------------------------------------------------------------*/
square::square() : rectangle()
{
  // empty because we called the base class constructor which
  // will set the length and height
}

square::square(double l) : rectangle(l, l)
{
  // same as above 
}

double square::get_area() const
{
  return rectangle::get_area();
}

double square::get_perimeter() const
{
  return rectangle::get_perimeter();
}

