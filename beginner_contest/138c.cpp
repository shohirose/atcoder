#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<double> v(n);
  for (auto&& vi : v) std::cin >> vi;

  std::sort(v.begin(), v.end());

  double sum = v[0];
  for (int i = 1; i < n; ++i) sum = (sum + v[i]) / 2;

  std::cout << sum << std::endl;
}