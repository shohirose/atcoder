#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  using std::cin;
  using std::string;
  using std::vector;

  string s;
  cin >> s;

  int q;
  cin >> q;

  vector<int> t(q);
  vector<int> f(q);
  vector<char> c(q);

  for (int i = 0; i < q; ++i) {
    cin >> t[i];
    if (t[i] == 2) {
      cin >> f[i] >> c[i];
    }
  }

  bool is_reversed = false;
  string sfront;

  for (int i = 0; i < q; ++i) {
    if (t[i] == 1) {
      is_reversed = !is_reversed;
    } else {
      if (is_reversed) {
        if (f[i] == 1) {
          s.push_back(c[i]);
        } else {
          sfront.push_back(c[i]);
        }
      } else {
        if (f[i] == 1) {
          sfront.push_back(c[i]);
        } else {
          s.push_back(c[i]);
        }
      }
    }
  }

  string ans;
  using std::reverse;

  if (is_reversed) {
    reverse(s.begin(), s.end());
    ans = s + sfront;
  } else {
    reverse(sfront.begin(), sfront.end());
    ans = sfront + s;
  }

  std::cout << ans << std::endl;
}