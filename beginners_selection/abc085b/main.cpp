#include <iostream>
#include <set>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> d(n);
  for (auto&& di : d) {
    std::cin >> di;
  }

  std::set<int> unique_d;
  for (auto&& di : d) {
    unique_d.insert(di);
  }

  std::cout << unique_d.size() << std::endl;
}
