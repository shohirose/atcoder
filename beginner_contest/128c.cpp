#include <iostream>
#include <vector>

int main() {
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> s(m);
  for (auto&& si : s) {
    int k;
    std::cin >> k;
    si.resize(k);
    for (auto&& sij : si) std::cin >> sij;
  }

  std::vector<int> p(m);
  for (auto&& pi : p) std::cin >> pi;
}