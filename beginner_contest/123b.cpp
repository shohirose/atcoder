
#include <array>
#include <iostream>

int main() {
  std::array<int, 5> v;
  for (int i = 0; i < 5; ++i) std::cin >> v[i];

  int t = 0;
  int dt = 10;
  for (int i = 0; i < 5; ++i) {
    if (v[i] % 10 == 0)
      t += v[i];
    else {
      dt = std::min(dt, v[i] % 10);
      t += (v[i] / 10 + 1) * 10;
    }
  }
  std::cout << t + dt - 10 << std::endl;
}