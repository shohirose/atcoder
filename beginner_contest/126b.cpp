#include <iostream>
#include <string>

bool is_month(int vv) { return vv > 0 && vv < 13; }

int main() {
  int vvvv;
  std::cin >> vvvv;

  const auto vv1 = vvvv / 100;
  const auto vv2 = vvvv - 100 * vv1;

  if (is_month(vv1) && is_month(vv2)) {
    std::cout << "AMBIGUOUS" << std::endl;
  } else if (is_month(vv1) && !is_month(vv2)) {
    std::cout << "MMYY" << std::endl;
  } else if (!is_month(vv1) && is_month(vv2)) {
    std::cout << "YYMM" << std::endl;
  } else {
    std::cout << "NA" << std::endl;
  }
}
