#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class MyTransform {
private:
  int shift;

public:
  MyTransform(int s) : shift(s) {}; //initializes the data member `shift`

  // overload the `()` operator
  char operator()(char c) { 
    if (isspace(c))
      return ' ';
    else {
      static std::string letters("abcdefghijklmnopqrstuvwxyz");
      // using the companion type string::size_of
      std::string::size_type found = letters.find(tolower(c));
      int shiftedpos = ( static_cast<int>(found) + shift) % 26;
      if (shiftedpos < 0)
        shiftedpos = 26 + shiftedpos;
      char shifted = letters[shiftedpos];
      return shifted;
    }
  }
};

int main() {
  std::string input;
  std::cout << "Which text is to be encypted?\n";
  getline(std::cin, input);
  std::cout << "shift?\n";
  int myshift = 0;
  std::cin >> myshift;
  std::cout << "Before encryption:\n" << input << std::endl;
  std::transform(input.begin(), input.end(), input.begin(), MyTransform(myshift));
  std::cout << "encrypted:\n";
  std::cout << input << std::endl;
  myshift *= -1; // decrypting
  std::transform(input.begin(), input.end(), input.begin(), MyTransform(myshift));
  std::cout << "Decrypted again:\n";
  std::cout << input << std::endl;
  return 0;
}
