#include <array>
#include <iostream>

int min_sum(int p, int q, int r) {
  if (p < q) {
    if (q < r)
      return p + q;
    else
      return p + r;
  } else {
    if (p < r)
      return p + q;
    else
      return q + r;
  }
}

int main() {
  int p, q, r;
  std::cin >> p >> q >> r;
  std::cout << min_sum(p, q, r) << std::endl;
}
