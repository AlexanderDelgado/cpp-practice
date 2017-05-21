#include <iostream>
#include "rectangleSquare.hpp"


int main()
{
  rectangle r(4.0, 5.0);
  square s(4.0);

  rectangle r0;
  square s0;

  std::cout << r.get_perimeter() << std::endl;
  std:: cout << r.get_area() << std::endl;

  std::cout << s.get_perimeter() << std::endl;
  std::cout << s.get_area() << std::endl;

  std::cout << r0.get_perimeter() << endl;
  std::cout << r0.get_area() << std::endl;

  std::cout << s0.get_perimeter() << std::endl;
  std::cout << s0.get_area() << std::endl;

  
  return 0;
}
