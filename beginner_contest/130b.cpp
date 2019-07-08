#include <iostream>
#include <vector>

int main() {
  int n, x;
  std::cin >> n >> x;

  std::vector<int> l(n);
  for (auto&& li : l) std::cin >> li;

  int count = 1;
  int di = 0;
  for (auto&& li : l) {
    di += li;
    if (di <= x)
      ++count;
    else
      break;
  }
  std::cout << count << std::endl;
}
