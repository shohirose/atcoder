#include <iostream>

int main() {
  int n500, n100, n50, x;
  std::cin >> n500;
  std::cin >> n100;
  std::cin >> n50;
  std::cin >> x;

  int count = 0;
  for (int i = 0; i <= n500; ++i) {
    for (int j = 0; j <= n100; ++j) {
      for (int k = 0; k <= n50; ++k) {
        if (i * 500 + j * 100 + k * 50 == x) {
          ++count;
        }
      }
    }
  }

  std::cout << count << std::endl;
}
