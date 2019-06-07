#include <iostream>

int main() {
  std::size_t n, m;
  std::cin >> n >> m;

  std::size_t lmax = 0;
  std::size_t rmin = n;

  for (std::size_t i = 0; i < m; ++i) {
    std::size_t l, r;
    std::cin >> l >> r;
    if (l > lmax) lmax = l;
    if (r < rmin) rmin = r;
  }

  std::cout << (rmin < lmax ? 0 : rmin - lmax + 1) << std::endl;
}
