#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> h(n);
  for (auto&& hi : h) {
    std::cin >> hi;
  }

  std::vector<int> cost(n, 0);
  cost[0] = 0;
  cost[1] = std::abs(h[0] - h[1]);
  for (int i = 2; i < n; ++i) {
    const auto c1 = cost[i - 2] + std::abs(h[i - 2] - h[i]);
    const auto c2 = cost[i - 1] + std::abs(h[i - 1] - h[i]);
    cost[i] = std::min(c1, c2);
  }
  std::cout << cost[n - 1] << std::endl;
}