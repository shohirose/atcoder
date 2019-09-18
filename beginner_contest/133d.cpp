#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::size_t n;
  std::cin >> n;

  std::vector<size_t> a(n, 0);
  for (auto&& ai : a) std::cin >> ai;

  const auto sum = std::accumulate(a.begin(), a.end(), size_t(0)) / 2;
  std::vector<size_t> x(n, 0);
  x[0] = sum;
  for (size_t i = 1; i < n; i = i + 2) x[0] -= a[i];
  for (size_t i = 0; i < n - 1; ++i) x[i + 1] = a[i] - x[i];

  for (auto&& xi : x) std::cout << 2 * xi << ' ';
  std::cout << std::flush;
}