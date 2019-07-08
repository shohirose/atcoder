#include <iostream>
#include <string>

bool has_two_chars(const std::string& s) {
  return ((s[0] == s[1] && s[2] == s[3]) ||  //
          (s[0] == s[3] && s[1] == s[2]) ||  //
          (s[0] == s[2] && s[1] == s[3]))
             ? true
             : false;
}

int main() {
  std::string s;
  std::cin >> s;

  std::cout << (has_two_chars(s) ? "Yes" : "No") << std::endl;
}
