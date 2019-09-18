#include <climits>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> b(n - 1);
  for (auto&& bi : b) std::cin >> bi;

  std::vector<int> a(n, INT_MAX);
  for (int i = 0; i < n - 1; ++i) {
    if (a[i] > b[i]) a[i] = b[i];
    a[i + 1] = b[i];
  }
  const auto sum = std::accumulate(a.begin(), a.end(), 0);
  std::cout << sum << std::endl;
}