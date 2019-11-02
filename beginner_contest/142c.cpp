#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (auto&& ai : a) std::cin >> ai;

  std::vector<int> id(n);
  std::iota(id.begin(), id.end(), 1);
  std::sort(id.begin(), id.end(),
            [&a](auto i, auto j) { return a[i - 1] < a[j - 1]; });
  for (auto i : id) std::cout << i << ' ';
  std::cout << std::endl;
}