#include <cstring>
#include <iostream>
#include <string>

bool ends_with(const std::string& s, const char* c) {
  const auto len = strlen(c);
  if (s.size() < len) return false;
  return equal(c, c + len, s.end() - len);
}

int main() {
  std::string s;
  std::cin >> s;

  while (s.size() > 0) {
    if (ends_with(s, "dreamer")) {
      s.erase(s.size() - 7, 7);
    } else if (ends_with(s, "dream")) {
      s.erase(s.size() - 5, 5);
    } else if (ends_with(s, "erase")) {
      s.erase(s.size() - 5, 5);
    } else if (ends_with(s, "eraser")) {
      s.erase(s.size() - 6, 6);
    } else {
      std::cout << "NO" << std::endl;
      return EXIT_SUCCESS;
    }
  }
  std::cout << "YES" << std::endl;
  return EXIT_SUCCESS;
}
