#include <cstdio>

int faculty(int x) {
  int result = 1;
  while (x > 0) {
    result *= x;
    x--;
  }
  return result;
}

int main() {
  int x = 12;  // You can change the value of x to calculate the factorial for a
               // different number
  int result = faculty(x);
  std::printf("%d! = %d\n", x, result);
  return 0;
}