#include <iostream>
#include <vector>

int min_diff(int n, const std::vector<int>& w) {
  std::vector<int> cum(n);
  cum[0] = w[0];
  for (int i = 1; i < n; ++i) cum[i] = w[i] + cum[i - 1];

  int min = cum[n - 1];
  for (int i = 0; i < n; ++i) {
    const auto s1 = cum[i];
    const auto s2 = cum[n - 1] - cum[i];
    const auto diff = std::abs(s1 - s2);
    if (min > diff) min = diff;
  }
  return min;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> w(n);
  for (auto&& wi : w) std::cin >> wi;

  std::cout << min_diff(n, w) << std::endl;
}
