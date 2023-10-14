#include <iostream>

using namespace std;

int main() {
  int x=12, y=5, z, w;

  if (x % 2 == 0) {
    z = (x+y) * 5;
    if (z > 42 and z < 95) {
      if (y > 0 and y <= 10) 
        w = z - y;
      else {
        if (y > 20 and y < 70)
          w = z + y;
        else
          w = 2 * x + z;
      }
    } else {
      if (x > 10 or x < 30)
        w = z - 3 * x;
      else
        w = 4 * z + x;
    }
  } else
    w = 5 * x * x * x + (x*y);
  cout<<w;
  return 0;
}
