#include <algorithm>
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << std::max({a + b, 2 * a - 1, 2 * b - 1}) << std::endl;
}
