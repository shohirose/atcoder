#include <iostream>

int main() {
  int n, a, b;
  std::cin >> n >> a >> b;

  int total = 0;
  for (int i = 1; i <= n; ++i) {
    int sum = 0;
    int num = i;
    while (num > 0) {
      sum += num % 10;
      num /= 10;
    }
    if (sum >= a && sum <= b) {
      total += i;
    }
  }

  std::cout << total << std::endl;
}
