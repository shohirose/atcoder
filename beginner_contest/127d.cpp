#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

struct Pair {
  std::size_t b;
  std::size_t c;
};

int main() {
  std::size_t n, m;
  std::cin >> n >> m;

  std::vector<std::size_t> a(n);
  for (auto&& ai : a) std::cin >> ai;
  std::sort(a.begin(), a.end());

  std::vector<Pair> pairs(m);
  for (auto&& p : pairs) std::cin >> p.b >> p.c;
  std::sort(pairs.begin(), pairs.end(),
            [](const auto& p1, const auto& p2) { return p1.c > p2.c; });

  std::size_t k = 0;
  for (auto&& p : pairs) {
    for (std::size_t j = 0; j < p.b; ++j) {
      if (a[k] < p.c)
        a[k++] = p.c;
      else
        break;
    }
  }

  const auto sum = std::accumulate(a.begin(), a.end(), 0ULL);
  std::cout << sum << std::endl;
}
