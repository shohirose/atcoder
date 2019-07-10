#include <iostream>

int main() {
  int a, b, t;
  std::cin >> a >> b >> t;

  int n = 0;
  for (int i = a; i <= t; i += a) n += b;

  std::cout << n << std::endl;
}