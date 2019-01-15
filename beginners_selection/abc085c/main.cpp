#include <iostream>

int main() {
  int n, y;
  std::cin >> n >> y;

  for (int i = n; i >= 0; --i) {
    for (int j = n - i; j >= 0; --j) {
      int k = n - i - j;
      if (i * 10000 + j * 5000 + k * 1000 == y) {
        std::cout << i << ' ' << j << ' ' << k << std::endl;
        return EXIT_SUCCESS;
      }
    }
  }
  std::cout << "-1 -1 -1" << std::endl;
  return EXIT_SUCCESS;
}
