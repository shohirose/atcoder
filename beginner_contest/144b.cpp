#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool ok = false;
  for (int i = 1; i <= 9; ++i) {
    if (n % i == 0 && n / i <= 9) {
      ok = true;
      break;
    }
  }
  std::cout << (ok ? "Yes" : "No") << std::endl;
}