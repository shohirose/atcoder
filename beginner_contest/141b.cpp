#include <iostream>
#include <regex>
#include <string>

int main() {
  std::regex reg("^([^L][^R])*[^L]?$");
  std::string s;
  std::cin >> s;
  std::cout << (std::regex_match(s, reg) ? "Yes" : "No") << std::endl;
}