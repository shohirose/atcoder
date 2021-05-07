#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> A(N);
  for (auto& Ai : A) {
    std::cin >> Ai;
  }

  std::vector<int> B(N);
  for (auto& Bi : B) {
    std::cin >> Bi;
  }

  const auto maxA = *std::max_element(A.begin(), A.end());
  const auto minB = *std::min_element(B.begin(), B.end());
  const auto numX = std::max(0, minB - maxA + 1);

  std::cout << numX << std::endl;
}