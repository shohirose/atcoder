#include <iomanip>
#include <iostream>

bool isEven(int n) { return n % 2 == 0; }

int main() {
  int n;
  std::cin >> n;

  const auto p = isEven(n) ? 0.5 : ((n - 1) / 2 + 1) / static_cast<double>(n);
  std::cout << std::setprecision(10) << p << std::endl;
}