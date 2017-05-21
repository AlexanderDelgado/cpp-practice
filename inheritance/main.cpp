#include <iostream>
#include "rectangleSquare.hpp"


int main()
{
  rectangle r(4.0, 5.0);
  square s(4.0);

  rectangle r0;
  square s0;

  std::cout << "The perimeter of the rectangle is " <<  r.get_perimeter() << std::endl;
  std::cout << "The area of the rectangle is " << r.get_area() << std::endl;

  std::cout << "The perimeter of the square is " <<  s.get_perimeter() << std::endl;
  std::cout << "The area of the square is " <<  s.get_area() << std::endl;

  std::cout << "The perimeter of a default rectangle is " << r0.get_perimeter() << endl;
  std::cout << "The area of a default rectangle is " << r0.get_area() << std::endl;

  std::cout << "The perimeter of a default square is " << s0.get_perimeter() << std::endl;
  std::cout << "The area of a default square is " << s0.get_area() << std::endl;
  
  return 0;
}
