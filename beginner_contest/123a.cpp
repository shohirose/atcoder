#include <array>
#include <iostream>

int main() {
  std::array<int, 5> v;
  int k;
  std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> k;

  bool found = false;
  for (int i = 0; i < 4; ++i) {
    for (int j = i + 1; j < 5; ++j) {
      if (v[j] - v[i] > k) {
        found = true;
        break;
      }
    }
  }
  std::cout << (found ? ":(" : "Yay!") << std::endl;
}