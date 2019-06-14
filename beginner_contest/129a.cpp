#include <algorithm>
#include <array>
#include <iostream>

int main() {
  std::array<int, 3> v;
  std::cin >> v[0] >> v[1] >> v[2];
  std::sort(v.begin(), v.end());
  std::cout << v[0] + v[1] << std::endl;
}
