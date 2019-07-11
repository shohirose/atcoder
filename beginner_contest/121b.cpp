#include <iostream>
#include <vector>

int main() {
  int n, m, c;
  std::cin >> n >> m >> c;

  std::vector<int> b(m);
  for (auto&& bi : b) std::cin >> bi;

  std::vector<std::vector<int>> a(n);
  for (auto&& ai : a) {
    ai.resize(m);
    for (auto&& aij : ai) std::cin >> aij;
  }

  int count = 0;
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = 0; j < m; ++j) sum += a[i][j] * b[j];
    if (sum + c > 0) ++count;
  }
  std::cout << count << std::endl;
}