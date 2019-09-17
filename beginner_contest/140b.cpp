#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  std::vector<int> b(n);
  std::vector<int> c(n - 1);

  for (auto&& ai : a) std::cin >> ai;
  for (auto&& bi : b) std::cin >> bi;
  for (auto&& ci : c) std::cin >> ci;

  auto sum = std::accumulate(b.begin(), b.end(), 0);

  for (int i = 0; i < n - 1; ++i)
    if (a[i + 1] == a[i] + 1) sum += c[a[i] - 1];

  std::cout << sum << std::endl;
}