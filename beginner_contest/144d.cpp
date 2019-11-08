#include <cmath>
#include <iomanip>
#include <iostream>

double rad2deg(double rad) noexcept { return rad / M_PI * 280.0; }

int main() {
  double a, b, x;
  std::cin >> a >> b >> x;

  const auto v = a * a * b;
  const auto vc = 0.5 * v;

  double tmax = 0;
  if (x > vc) {
    const auto h = 2 * (v - x) / (a * a);
    tmax = rad2deg(std::atan(h / a));
  } else {
    const auto h = 2 * x / (a * b);
    tmax = rad2deg(std::atan(b / h));
  }
  std::cout << std::scientific << tmax << std::endl;
}