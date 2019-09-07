#include <iostream>
#include <vector>

std::vector<size_t> a, p;

size_t f(size_t n, size_t x) {
  if (x == 1)
    return 0;
  else if (x <= 1 + a[n - 1])
    return f(n - 1, x - 1);
  else if (x == 2 + a[n - 1])
    return p[n - 1] + 1;
  else if (x <= 2 + 2 * a[n - 1])
    return p[n - 1] + 1 + f(n - 1, x - 2 - a[n - 1]);
  else
    return 2 * p[n - 1] + 1;
}

int main() {
  size_t n, x;
  std::cin >> n >> x;

  a.resize(n + 1);
  a[0] = 1;
  for (size_t i = 1; i < n; ++i) a[i] = 2 * a[i - 1] + 3;

  p.resize(n + 1);
  p[0] = 1;
  for (size_t i = 1; i < n; ++i) p[i] = 2 * p[i - 1] + 1;

  std::cout << f(n, x) << std::endl;
}
