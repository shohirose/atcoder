#include <iostream>
#include <string>

int main() {
  int a, b;
  std::cin >> a >> b;
  const auto result = a * b;

  if (result % 2 == 0) {
    std::cout << "Even" << std::endl;
  } else {
    std::cout << "Odd" << std::endl;
  }
}
