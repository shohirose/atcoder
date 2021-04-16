#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int n, wmax;
  std::cin >> n >> wmax;

  std::vector<int> w(n);
  std::vector<size_t> v(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> w[i] >> v[i];
  }

  std::vector<size_t> vsum1(wmax + 1, 0);
  std::vector<size_t> vsum2(wmax + 1, 0);

  for (int j = 0; j < n; ++j) {
    for (int i = 1; i <= wmax; ++i) {
      vsum2[i] =
          (i < w[j]) ? vsum1[i] : std::max(vsum1[i - w[j]] + v[j], vsum1[i]);
    }
    std::copy(vsum2.begin(), vsum2.end(), vsum1.begin());
  }

  const auto it = std::max_element(vsum1.begin(), vsum1.end());
  std::cout << *it << std::endl;
}