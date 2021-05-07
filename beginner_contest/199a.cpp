#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;
  std::cout << ((A * A + B * B < C * C) ? "Yes" : "No") << std::endl;
}