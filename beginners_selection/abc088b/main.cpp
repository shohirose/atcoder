#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (auto&& ai : a) {
    std::cin >> ai;
  }

  std::sort(a.begin(), a.end(), std::greater<int>());

  int nturns = n / 2;
  int alice  = 0;
  int bob    = 0;
  for (int i = 0; i < nturns; ++i) {
    const auto j = i * nturns;
    alice += a[j];
    bob += a[j + 1];
  }
  if (n % 2 != 0) {
    alice += a.back();
  }

  std::cout << alice - bob << std::endl;
}
