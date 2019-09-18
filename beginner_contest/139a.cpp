#include <iostream>
#include <string>

int main() {
  std::string s, t;
  std::cin >> s >> t;

  int count = 0;
  for (int i = 0; i < 3; ++i)
    if (s[i] == t[i]) ++count;

  std::cout << count << std::endl;
}