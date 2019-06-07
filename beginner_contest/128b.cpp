#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<std::string> s(n);
  std::vector<int> p(n);
  std::vector<int> id(n);

  for (int i = 0; i < n; ++i) std::cin >> s[i] >> p[i];
  std::iota(id.begin(), id.end(), 0);

  std::sort(id.begin(), id.end(), [&s, &p](auto i, auto j) {
    return s[i] == s[j] ? p[i] > p[j] : s[i] < s[j];
  });

  for (auto&& i : id) std::cout << i + 1 << std::endl;
}
