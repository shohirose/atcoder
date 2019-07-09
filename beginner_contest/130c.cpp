#include <iostream>

int main() {
  size_t w, h, x, y;
  std::cin >> w >> h >> x >> y;
  const auto is_center = (2 * x == w && 2 * y == h);
  const auto rect_area = double(w * h);
  std::cout << rect_area / 2.0 << ' ' << (is_center ? 1 : 0) << std::endl;
}
