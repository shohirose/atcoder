#include <bitset>
#include <iostream>
#include <string>

using bitset = std::bitset<3>;

int main() {
  bitset bs;
  std::cin >> bs;
  std::cout << bs.count() << std::endl;
}
