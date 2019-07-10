#include <algorithm>
#include <iostream>
#include <vector>

size_t gcd(size_t m, size_t n) {
  if (m == 0) return n;
  if (n == 0) return m;
  if (m < n) std::swap(m, n);
  size_t r = 1;
  while (r != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main() {
  size_t n;
  std::cin >> n;

  std::vector<size_t> a(n + 2, 0);
  for (size_t i = 1; i <= n; ++i) std::cin >> a[i];

  std::vector<size_t> l(n + 2, 0);
  for (size_t i = 0; i < n; ++i) l[i + 1] = gcd(l[i], a[i]);

  std::vector<size_t> r(n + 2, 0);
  for (size_t i = n; i > 0; --i) r[i] = gcd(r[i + 1], a[i]);

  std::vector<size_t> m(n);
  for (size_t i = 1; i <= n; ++i) m[i - 1] = gcd(l[i], r[i + 1]);

  const auto it = std::max_element(m.begin(), m.end());
  std::cout << *it << std::endl;
}