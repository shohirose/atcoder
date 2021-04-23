#include <cstdint>
#include <iostream>
#include <optional>
#include <vector>

using std::int64_t;

/// @brief Computes a sereis of exponentiation of integers
/// @param[in] base Base
/// @param[in] max_exponent The maximum of exponent
/// @param[in] max_value The uppper limit of exponentiation
/// @returns A list of exponentiation starting from 1 to {base}^n
std::vector<int64_t> calc_pows(int base, int max_exponent, int64_t max_value) {
  std::vector<int64_t> v;
  v.reserve(max_exponent + 1);
  v.resize(1);
  v[0] = 1;
  for (int i = 1; i <= max_exponent; ++i) {
    const auto vi = v[i - 1] * base;
    if (vi >= max_value) break;
    v.push_back(vi);
  }
  return v;
}

/// @brief A pair of exponents
struct exponent_pair {
  int A;  /// 3^A
  int B;  /// 5^B
};

std::ostream& operator<<(std::ostream& os, const exponent_pair& pair) {
  return os << pair.A << ' ' << pair.B;
}

/// @brief Find a pair of exponents which satisfies 3^A + 5^B = N
/// @param[in] v3 3^A
/// @param[in] v5 5^B
/// @param[in] n N
/// @returns A and B
std::optional<exponent_pair> find_exponents(const std::vector<int64_t>& v3,
                                            const std::vector<int64_t>& v5,
                                            int64_t n) {
  for (size_t i = 1; i < v3.size(); ++i) {
    const auto rsd = n - v3[i];
    for (size_t j = 1; j < v5.size(); ++j) {
      if (rsd == v5[j]) {
        return exponent_pair{static_cast<int>(i), static_cast<int>(j)};
      } else if (rsd < v5[j]) {
        break;
      }
    }
  }
  return std::nullopt;
}

int main() {
  int64_t N;
  std::cin >> N;

  const auto v3 = calc_pows(3, 50, N);
  const auto v5 = calc_pows(5, 50, N);
  const auto result = find_exponents(v3, v5, N);

  if (result) {
    std::cout << *result << std::endl;
  } else {
    std::cout << -1 << std::endl;
  }
}