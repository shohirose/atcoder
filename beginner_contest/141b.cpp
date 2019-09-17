#include <iostream>
#include <string>

int main() {
  auto is_RUD = [](char c) { return c == 'R' || c == 'U' || c == 'D'; };
  auto is_LUD = [](char c) { return c == 'L' || c == 'U' || c == 'D'; };
  auto is_easy_steps = [&is_RUD, &is_LUD](const std::string& s) {
    for (size_t i = 0; i < s.size(); i += 2)
      if (!is_RUD(s[i])) return "No";
    for (size_t i = 1; i < s.size(); i += 2)
      if (!is_LUD(s[i])) return "No";
    return "Yes";
  };
  std::string s;
  std::cin >> s;
  std::cout << is_easy_steps(s) << std::endl;
}