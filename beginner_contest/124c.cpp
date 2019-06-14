#include <iostream>
#include <string>

bool is_even(std::size_t n) { return n % 2 == 0; }

int main() {
  std::string s;
  std::cin >> s;

  std::size_t wb = 0;
  std::size_t bw = 0;

  for (std::size_t i = 0; i < s.size(); ++i) {
    if (is_even(i)) {
      if (s[i] == '0')
        ++wb;
      else
        ++bw;
    } else {
      if (s[i] == '1')
        ++wb;
      else
        ++bw;
    }
  }

  std::cout << std::min(bw, wb) << std::endl;
}
