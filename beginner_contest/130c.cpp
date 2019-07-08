#include <algorithm>
#include <iostream>

int main() {
  size_t w, h, x, y;
  std::cin >> w >> h >> x >> y;
  const auto is_center = (2 * x == w && 2 * y == h);
  std::cout << double(w * h) / 2.0 << ' ' << (is_center ? 1 : 0) << std::endl;
}
