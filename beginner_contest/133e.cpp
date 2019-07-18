#include <iostream>
#include <vector>

constexpr size_t MOD = 1'000'000'007;

using Graph = std::vector<std::vector<size_t>>;

size_t permutation(size_t n, size_t r) {
  size_t m = 1;
  for (size_t i = 0; i < r; ++i) {
    m *= n - i;
    m %= MOD;
  }
  return m;
}

size_t dfs(const Graph& g, size_t k, size_t vc, size_t vp) {
  const auto r = g[vc].size();
  auto m = (vc == 0) ? k * permutation(k - 1, r) : permutation(k - 2, r - 1);
  m %= MOD;

  for (auto&& vi : g[vc]) {
    if (vi != vp) {
      m *= dfs(g, k, vi, vc);
      m %= MOD;
    }
  }

  return m;
}

int main() {
  size_t n, k;
  std::cin >> n >> k;

  Graph g(n);
  for (size_t i = 0; i < n - 1; ++i) {
    size_t a, b;
    std::cin >> a >> b;
    g[a - 1].push_back(b - 1);
    g[b - 1].push_back(a - 1);
  }

  std::cout << dfs(g, k, 0, -1) << std::endl;
}