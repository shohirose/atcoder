#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

std::vector<int> sorted_id(const std::vector<std::string>& s,
                           const std::vector<int>& p) {
  std::vector<int> id(s.size());
  std::iota(id.begin(), id.end(), 0);

  std::sort(id.begin(), id.end(), [&s, &p](auto i, auto j) {
    return s[i] == s[j] ? p[i] > p[j] : s[i] < s[j];
  });

  for (auto&& i : id) ++i;
  return id;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<std::string> s(n);
  std::vector<int> p(n);

  for (int i = 0; i < n; ++i) std::cin >> s[i] >> p[i];

  const auto id = sorted_id(s, p);
  for (auto&& i : id) std::cout << i << std::endl;
}
