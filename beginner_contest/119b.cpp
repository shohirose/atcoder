#include <cmath>
#include <iostream>

int main() {
  int a, b, c, k;
  std::cin >> a >> b >> c >> k;

  const auto maxsum = [a, b, c, k]() {
    const auto p = std::pow(2, k);
    if (a < c && b < c)
      return a + b + p * c;
    else if (a < b)
      return a + p * b + c;
    else
      return p * a + b + c;
  }();

  std::cout << maxsum << std::endl;
}