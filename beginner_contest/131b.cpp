#include <iostream>

int main() {
  int N, L;
  std::cin >> N >> L;

  const auto sum = N * L + N * (N - 1) / 2;

  const auto taste = [=]() {
    if (L >= 0)
      return sum - L;
    else if (N + L - 1 >= 0)
      return sum;
    else
      return sum - (N + L - 1);
  }();

  std::cout << taste << std::endl;
}