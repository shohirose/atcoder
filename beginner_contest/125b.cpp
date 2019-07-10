#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> v(n);
  for (auto&& vi : v) std::cin >> vi;

  std::vector<int> c(n);
  for (auto&& ci : c) std::cin >> ci;

  int max = 0;
  for (int i = 0; i < n; ++i) {
    const auto diff = v[i] - c[i];
    if (diff > 0) max += diff;
  }

  std::cout << max << std::endl;
}