#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ptrdiff_t n, k, q;
  std::cin >> n >> k >> q;

  std::vector<std::ptrdiff_t> a(q);
  for (std::ptrdiff_t i = 0; i < q; ++i) std::cin >> a[i];

  std::vector<std::ptrdiff_t> p(n, k - q);
  for (auto&& ai : a) ++p[ai - 1];
  for (auto&& pi : p) std::cout << (pi > 0 ? "Yes" : "No") << std::endl;
}