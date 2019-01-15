#include <iostream>

int main() {
  int a, b, c, x;
  std::cin >> a >> b >> c >> x;

  int count = 0;
  for (int i = 0; i <= a; ++i) {
    for (int j = 0; j <= b; ++j) {
      const auto rsd = x - i * 500 - j * 100;
      if (rsd >= 0 && rsd / 50 <= c) ++count;
    }
  }
  std::cout << count << std::endl;
}
