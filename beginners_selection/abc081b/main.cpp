#include <iostream>
#include <vector>

inline bool is_even(int i) { return i % 2 == 0; }

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (auto&& ai : a) {
    std::cin >> ai;
  }

  int count = 0;

  while (true) {
    bool finish = false;
    for (auto&& ai : a) {
      if (!is_even(ai)) {
        finish = true;
        break;
      }
    }

    if (finish) {
      break;
    } else {
      for (auto&& ai : a) {
        ai /= 2;
      }
      ++count;
    }
  };

  std::cout << count << std::endl;
}
