#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> l(n);
  for (auto&& li : l) std::cin >> li;
  std::sort(l.begin(), l.end());

  int count = 0;

  for (int i = 0; i < n; ++i) {
    const auto a = l[i];
    for (int j = i + 1; j < n; ++j) {
      const auto b = l[j];
      const auto begin = l.begin() + j + 1;
      const auto it = std::lower_bound(begin, l.end(), a + b);
      count += std::distance(begin, it);
    }
  }

  std::cout << count << std::endl;
}