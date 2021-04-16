#include <cmath>
#include <iostream>
#include <vector>

using std::size_t;

size_t greatestCommonDivisor(size_t a, size_t b) {
  if (a < b) std::swap(a, b);
  size_t r = a % b;
  while (r > 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

size_t countPrimeFactors(size_t n) {
  size_t count = 0;
  const auto max = static_cast<size_t>(std::sqrt(n));
  for (size_t pi = 2; pi <= max; ++pi) {
    if (n % pi == 0) {
      ++count;
      n /= pi;
      while (n % pi == 0) n /= pi;
    }
  }
  if (n > max) ++count;
  return count;
}

int main() {
  size_t a, b;
  std::cin >> a >> b;

  const auto gcd = greatestCommonDivisor(a, b);
  const auto n = countPrimeFactors(gcd) + 1;
  std::cout << n << std::endl;
}