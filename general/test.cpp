#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main() {
  
  int a[6] = {0, 1, 2, 3, 4, 5};
  
  int min = INT_MAX;
  int max = INT_MIN;

  for (int x : a) {
    if (x < min) min = x;
    if (x > max) max = x;
  }

  cout << min << endl;
  cout << max << endl;
  return 0;
}
