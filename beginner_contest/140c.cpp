#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> b(n - 1);
  for (auto&& bi : b) std::cin >> bi;

  std::vector<int> a(n, 0);
  a[n - 1] = b[n - 2];

  for (int i = n - 2; i >= 0; --i) {
    if (a[i + 1] > b[i]) a[i + 1] = b[i];
    a[i] = b[i];
  }

  const auto sum = std::accumulate(a.begin(), a.end(), 0);
  std::cout << sum << std::endl;
}