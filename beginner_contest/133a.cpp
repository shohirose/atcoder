#include <algorithm>
#include <iostream>

int main() {
  int n, a, b;
  std::cin >> n >> a >> b;
  std::cout << std::min(a * n, b) << std::endl;
}