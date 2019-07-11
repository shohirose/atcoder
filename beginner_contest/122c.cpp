#include <iostream>
#include <string>
#include <vector>

int main() {
  int n, q;
  std::string s;
  std::cin >> n >> q >> s;

  std::vector<int> l(q);
  std::vector<int> r(q);
  for (int i = 0; i < q; ++i) std::cin >> l[i] >> r[i];

  std::vector<int> cum(n);
  cum[0] = 0;
  for (int i = 1; i < n; ++i)
    cum[i] = (s[i - 1] == 'A' && s[i] == 'C') ? (cum[i - 1] + 1) : cum[i - 1];

  for (int i = 0; i < q; ++i)
    std::cout << (cum[r[i] - 1] - cum[l[i] - 1]) << std::endl;
}