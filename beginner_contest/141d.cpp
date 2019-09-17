#include <iostream>
#include <queue>

int main() {
  size_t n, m;
  std::cin >> n >> m;

  std::priority_queue<size_t> a;
  for (size_t i = 0; i < n; ++i) {
    size_t ai;
    std::cin >> ai;
    a.push(ai);
  }

  for (size_t i = 0; i < m; ++i) {
    const auto x = a.top();
    a.pop();
    a.push(x / 2);
  }

  size_t sum = 0;
  while (!a.empty()) {
    sum += a.top();
    a.pop();
  }

  std::cout << sum << std::endl;
}