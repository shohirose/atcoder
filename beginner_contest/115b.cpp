#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> p(n);
  for (auto&& pi : p) std::cin >> pi;

  const auto sum = std::accumulate(p.begin(), p.end(), 0);
  const auto max_p = *std::max_element(p.begin(), p.end());
  std::cout << sum - max_p / 2 << std::endl;
}
