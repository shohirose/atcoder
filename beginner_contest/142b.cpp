#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> h(n);
  for (auto&& hi : h) std::cin >> hi;

  const auto m =
      std::count_if(h.begin(), h.end(), [k](const auto hi) { return hi >= k; });
  std::cout << m << std::endl;
}