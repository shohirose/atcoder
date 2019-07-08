#include <algorithm>
#include <iostream>
#include <vector>

int count(std::vector<int>& d) {
  std::sort(d.begin(), d.end());
  const auto n = d.size();
  return d[n / 2] - d[n / 2 - 1];
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> d(n);
  for (auto&& di : d) std::cin >> di;

  std::cout << count(d) << std::endl;
}
