#include <iostream>
#include <vector>

int count(const std::vector<int>& p) {
  int n = 0;
  for (size_t i = 1; i < p.size() - 1; ++i) {
    if ((p[i - 1] < p[i] && p[i] < p[i + 1]) ||
        (p[i - 1] > p[i] && p[i] > p[i + 1]))
      ++n;
  }
  return n;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> p(n);
  for (auto&& pi : p) std::cin >> pi;

  std::cout << count(p) << std::endl;
}
