#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> h(n);
  for (auto&& hi : h) std::cin >> hi;

  int ans = 0;
  int hmax = h[0];
  for (auto&& hi : h) {
    if (hmax <= hi) {
      ++ans;
      hmax = hi;
    }
  }
  std::cout << ans << std::endl;
}
