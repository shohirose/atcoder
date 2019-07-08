#include <iostream>
#include <vector>
#include <algorithm>

bool is_all_even(const std::vector<int>& values) {
  auto it = std::find_if(values.begin(), values.end(), [](const auto v){
    return v % 2 != 0;});
  return it == values.end();
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> values(n);
  for (auto&& v : values) {
    std::cin >> v;
  }

  int count = 0;

  while (is_all_even(values)) {
    std::for_each(values.begin(), values.end(), [](auto& v) { v /= 2; });
    ++count;
  };

  std::cout << count << std::endl;
}
