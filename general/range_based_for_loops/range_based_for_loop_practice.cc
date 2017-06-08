#include <iostream>
#include <string>

int main() {
  std::string str("some string");

  // print the chars in str one char at a time
  for (char c : str)
    std::cout << c << std::endl;

  std::string s("Hello World!!!");

  for (auto &c : s)
    c = toupper(c);

  std::cout << s << std::endl;
  
 }
