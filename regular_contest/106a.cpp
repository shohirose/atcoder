#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>

using std::int64_t;

/// @brief Computes a sereis of exponentiation of integers
/// @param[in] base Base
/// @param[in] maxExponent The maximum of exponent
/// @param[in] maxValue The uppper limit of exponentiation
/// @returns A list of exponentiation starting from 1 to {base}^n
std::vector<int64_t> calcPows(int base, int maxExponent, int64_t maxValue) {
  std::vector<int64_t> v;
  v.reserve(maxExponent + 1);
  v.resize(1);
  v[0] = 1;
  for (int i = 1; i <= maxExponent; ++i) {
    const auto vi = v[i - 1] * base;
    if (vi >= maxValue) break;
    v.push_back(vi);
  }
  return v;
}

/// @brief Find exponents which satisfy 3^A + 5^B = N
/// @param[in] v3 3^A
/// @param[in] v5 5^B
/// @param[in] n N
/// @returns A and B
///
/// If A and B are not found, they are set to zero.
std::pair<size_t, size_t> findExponents(const std::vector<int64_t>& v3,
                                        const std::vector<int64_t>& v5,
                                        int64_t n) {
  for (size_t i = 1; i < v3.size(); ++i) {
    const auto rsd = n - v3[i];
    for (size_t j = 1; j < v5.size(); ++j) {
      if (rsd == v5[j]) {
        return {i, j};
      } else if (rsd < v5[j]) {
        break;
      }
    }
  }
  return {0, 0};
}

int main() {
  int64_t N;
  std::cin >> N;

  const auto v3 = calcPows(3, 50, N);
  const auto v5 = calcPows(5, 50, N);
  const auto [A, B] = findExponents(v3, v5, N);

  if (A != 0) {
    std::cout << A << ' ' << B << std::endl;
  } else {
    std::cout << -1 << std::endl;
  }
}