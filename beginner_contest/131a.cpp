#include <iostream>
#include <string>

bool is_good(const std::string& s) {
  return s[0] != s[1] && s[1] != s[2] && s[2] != s[3];
}

int main() {
  std::string s;
  std::cin >> s;
  std::cout << (is_good(s) ? "Good" : "Bad") << std::endl;
}