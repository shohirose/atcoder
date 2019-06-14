#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int fee = 0;
  if (a >= 13)
    fee = b;
  else if (a >= 6)
    fee = b / 2;

  std::cout << fee << std::endl;
}
