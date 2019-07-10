#include <algorithm>
#include <array>
#include <iostream>

int main() {
  constexpr auto N = 5;
  size_t n;
  std::array<size_t, N> v;
  std::cin >> n >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];

  std::array<size_t, N> mod;
  for (int i = 0; i < N; ++i)
    mod[i] = (n % v[i] == 0) ? n / v[i] : n / v[i] + 1;

  const auto it = std::max_element(mod.begin(), mod.end());
  const auto t = *it + 4;
  std::cout << t << std::endl;
}