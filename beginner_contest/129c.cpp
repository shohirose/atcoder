#include <iostream>
#include <vector>

int main() {
  size_t n, m;
  std::cin >> n >> m;

  std::vector<size_t> a(m);
  for (auto&& ai : a) std::cin >> ai;

  std::vector<bool> ok(n, true);
  for (auto&& ai : a) ok[ai - 1] = false;

  std::vector<size_t> count(n);
  count[0] = ok[0] ? 1 : 0;
  if (n > 1) count[1] = ok[1] ? (count[0] + 1) : 0;

  constexpr size_t DENOM = 1'000'000'007;
  for (size_t i = 2; i < n; ++i)
    count[i] = ok[i] ? ((count[i - 1] + count[i - 2]) % DENOM) : 0;

  std::cout << count[n - 1] << std::endl;
}
