#include <iostream>
#include <vector>

// Denominator
constexpr size_t DENOM = 1'000'000'007;

// @brief Computes a binominal of (n, r)
// @param n n of (n, r)
// @param r r of (n, r)
// @return A list of binominal from (n, 1) to (n, r)
std::vector<size_t> binominal(size_t n, size_t r) {
  std::vector<size_t> v(r + 1, 0);
  v[0] = 1;

  for (size_t i = 1; i <= n; ++i) {
    for (size_t j = r; j > 0; --j) {
      v[j] += v[j - 1];
      // If a value is beyond DENOM, modulo operation is performed.
      if (v[j] > DENOM) v[j] = v[j] % DENOM;
    }
  }

  return v;
}

/// @brief Computes the number of operations
/// @param[in] n The number of balls
/// @param[in] k The number of blue balls
/// @return A list of operations
std::vector<size_t> num_operations(size_t n, size_t k) {
  // The number of combinations of how to put {k} blue balls in {n - k} red
  // balls.
  // c1[i]: blue balls are divided into {i} groups.
  const auto c1 = binominal(n - k + 1, k);

  // The number of combinations of how to divide {k} blue balls into groups.
  // c2[i-1]: blue balls are divided into {i} groups.
  const auto c2 = binominal(k - 1, k - 1);

  // Number of operations
  std::vector<size_t> nops(k);
  for (size_t i = 0; i < k; ++i) nops[i] = c1[i + 1] * c2[i] % DENOM;
  return nops;
}

int main() {
  // n: the number of balls (red + blue).
  // k: the number of blue balls.
  size_t n, k;
  std::cin >> n >> k;

  const auto nops = num_operations(n, k);
  for (auto&& ni : nops) std::cout << ni << std::endl;
}
