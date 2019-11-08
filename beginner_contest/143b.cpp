#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> d(n);
  for (auto&& di : d) std::cin >> di;

  int dsum = 0;
  int sum = 0;
  for (int i = n - 2; i >= 0; --i) {
    dsum += d[i + 1];
    sum += dsum * d[i];
  }

  std::cout << sum << std::endl;
}