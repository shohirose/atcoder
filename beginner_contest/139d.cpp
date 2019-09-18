#include <iostream>
#include <vector>

int main() {
  size_t n;
  std::cin >> n;

  size_t count = n * (n + 1) / 2 - n;
  std::cout << count << std::endl;
}