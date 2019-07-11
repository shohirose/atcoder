#include <iostream>

int main() {
  int H, W, h, w;
  std::cin >> H >> W >> h >> w;

  const auto n = H * W - W * h - H * w + h * w;
  std::cout << n << std::endl;
}