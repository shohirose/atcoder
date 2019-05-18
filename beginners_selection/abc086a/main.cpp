#include <iostream>
#include <string>

bool is_even(int v) { return v % 2 == 0; }

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (is_even(a * b) ? "Even" : "Odd") << std::endl;
}
