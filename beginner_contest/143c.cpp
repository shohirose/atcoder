#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  int count = 1;
  char color = s[0];
  for (int i = 1; i < n; ++i) {
    if (s[i] != color) {
      color = s[i];
      ++count;
    }
  }

  std::cout << count << std::endl;
}