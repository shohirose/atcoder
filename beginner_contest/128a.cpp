#include <iostream>

int main() {
  int a, p;
  std::cin >> a >> p;
  const auto n_pieces = 3 * a + p;
  const auto n_pies = n_pieces / 2;
  std::cout << n_pies << std::endl;
}