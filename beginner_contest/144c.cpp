#include <cmath>
#include <iostream>
#include <vector>

int main() {
  using std::size_t;
  size_t n;
  std::cin >> n;

  const auto maxJ = static_cast<size_t>(std::sqrt(n));

  size_t minMove = n - 1;
  for (size_t j = 2; j <= maxJ; ++j) {
    if (n % j == 0) {
      const auto i = n / j;
      const size_t move = (i - 1) + (j - 1);
      if (move < minMove) minMove = move;
    }
  }

  std::cout << minMove << std::endl;
}