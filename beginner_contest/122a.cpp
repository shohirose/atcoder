#include <iostream>

char flip(const char c) {
  if (c == 'A')
    return 'T';
  else if (c == 'T')
    return 'A';
  else if (c == 'C')
    return 'G';
  else
    return 'C';
}

int main() {
  char c;
  std::cin >> c;
  std::cout << flip(c) << std::endl;
}