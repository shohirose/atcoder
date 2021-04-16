#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> h(n);
  for (auto&& hi : h) {
    std::cin >> hi;
  }

  std::vector<int> cost(n, 0);
  for (int i = 1; i < n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (i < j) {
        continue;
      }
      const auto c = cost[i - j] + std::abs(h[i - j] - h[i]);
      if (cost[i] > c) {
        cost[i] = c;
      }
    }
  }
  std::cout << cost[n - 1] << std::endl;
}