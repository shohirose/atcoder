#include <iostream>
#include <string>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::string s;
  std::cin >> s;

  s[k - 1] = std::tolower(s[k - 1]);
  std::cout << s << std::endl;
}
