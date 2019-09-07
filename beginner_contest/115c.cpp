#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> h(n);
  for (auto&& hi : h) std::cin >> hi;

  std::sort(h.begin(), h.end());

  int min = std::numeric_limits<int>::max();
  for (int i = 0; i < n - k + 1; ++i) min = std::min(min, h[i + k - 1] - h[i]);

  std::cout << min << std::endl;
}
