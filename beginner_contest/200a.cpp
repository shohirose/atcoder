#include <iostream>

int calc_century(int year) {
  return (year - 1) / 100 + 1;
}

int main() {
  int N;
  std::cin >> N;
  std::cout << calc_century(N) << std::endl;
}