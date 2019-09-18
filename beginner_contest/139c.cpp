#include <iostream>
#include <vector>

int main() {
  size_t n;
  std::cin >> n;

  std::vector<size_t> h(n);
  for (auto&& hi : h) std::cin >> hi;

  size_t max = 0;
  size_t count = 0;
  for (size_t i = 0; i < n - 1; ++i) {
    if (h[i] >= h[i + 1]) {
      ++count;
    } else {
      if (max < count) max = count;
      count = 0;
    }
  }
  if (max < count) max = count;

  std::cout << max << std::endl;
}