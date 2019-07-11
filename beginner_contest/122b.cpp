#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  auto is_acgt = [](char c) {
    return c == 'A' || c == 'C' || c == 'G' || c == 'T';
  };

  size_t max = 0;
  size_t length = 0;
  for (auto&& c : s) {
    length = is_acgt(c) ? length + 1 : 0;
    max = std::max(max, length);
  }
  std::cout << max << std::endl;
}