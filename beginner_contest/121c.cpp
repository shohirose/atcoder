#include <algorithm>
#include <iostream>
#include <vector>

struct Pair {
  size_t a;
  size_t b;
};

int main() {
  size_t n, m;
  std::cin >> n >> m;

  std::vector<Pair> pairs(n);
  for (auto&& p : pairs) std::cin >> p.a >> p.b;
  std::sort(pairs.begin(), pairs.end(),
            [](const auto& p1, const auto& p2) { return p1.a < p2.a; });

  size_t cost = 0;
  size_t num = 0;
  for (auto&& p : pairs) {
    if (num + p.b < m) {
      cost += p.a * p.b;
      num += p.b;
    } else {
      cost += (m - num) * p.a;
      num = m;
      break;
    }
  }
  std::cout << cost << std::endl;
}