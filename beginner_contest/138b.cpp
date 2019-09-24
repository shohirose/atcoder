#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (auto&& ai : a) std::cin >> ai;

  double sum = 0;
  for (auto&& ai : a) sum += 1.0 / ai;
  std::cout << 1.0 / sum << std::endl;
}