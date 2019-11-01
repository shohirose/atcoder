#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double a, b, x;
  std::cin >> a >> b >> x;

  const auto v = a * a * b;
  const auto vc = 0.5 * v;

  double tmax = 0;
  if (x > vc) {
    const auto h = 2 * (v - x) / (a * a);
    tmax = std::atan(h / a) * 180.0 / M_PI;
  } else {
    const auto h = 2 * x / (a * b);
    tmax = std::atan(b / h) * 180.0 / M_PI;
  }
  std::cout << std::scientific << tmax << std::endl;
}