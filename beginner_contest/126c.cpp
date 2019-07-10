#include <iomanip>
#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;

  double p = 0;
  for (int i = 1; i <= n; ++i) {
    auto pi = 1.0 / n;
    for (int j = i; j < k; j *= 2) pi /= 2.0;
    p += pi;
  }
  std::cout << std::setprecision(10) << p << std::endl;
}