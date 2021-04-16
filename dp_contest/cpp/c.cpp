#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

struct Tuple {
  int a;
  int b;
  int c;

  int max() const noexcept { return std::max({a, b, c}); }
};

std::istream& operator>>(std::istream& is, Tuple& t) {
  return is >> t.a >> t.b >> t.c;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<Tuple> h(n);
  for (auto&& hi : h) {
    std::cin >> hi;
  }

  std::vector<Tuple> cost(n);
  cost[0] = h[0];
  for (int i = 1; i < n; ++i) {
    auto& ci = cost[i];
    const auto& cii = cost[i - 1];
    ci.a = std::max(cii.b, cii.c) + h[i].a;
    ci.b = std::max(cii.a, cii.c) + h[i].b;
    ci.c = std::max(cii.a, cii.b) + h[i].c;
  }

  std::cout << cost[n - 1].max() << std::endl;
}