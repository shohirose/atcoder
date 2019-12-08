#include <iostream>
#include <queue>
#include <vector>

std::vector<std::vector<int>> make_graph(const int n) {
  std::vector<std::vector<int>> tree(n);
  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    std::cin >> a >> b;
    tree[a - 1].push_back(b - 1);
    tree[b - 1].push_back(a - 1);
  }
  return tree;
}

std::vector<int> make_counter(const int n, const int q) {
  std::vector<int> counter(n, 0);
  for (int i = 0; i < q; ++i) {
    int p, x;
    std::cin >> p >> x;
    counter[p - 1] += x;
  }
  return counter;
}

int main() {
  int n, q;
  std::cin >> n >> q;

  const auto tree = make_graph(n);
  auto counter = make_counter(n, q);

  std::queue<int> roots;
  roots.push(0);

  std::vector<bool> is_searched(n, false);

  // BFS
  while (!roots.empty()) {
    const auto root = roots.front();
    roots.pop();

    is_searched[root] = true;
    const auto c = counter[root];
    const auto& nodes = tree[root];

    for (auto&& node : nodes) {
      if (!is_searched[node]) {
        counter[node] += c;
        roots.push(node);
      }
    }
  }

  for (auto&& c : counter) std::cout << c << ' ';
  std::cout << std::flush;
}