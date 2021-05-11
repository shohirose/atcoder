#include <iostream>

int64_t calc_new_N(int64_t N) {
  if (N % 200 == 0) {
    return N / 200;
  } else {
    return N * 1000 + 200;
  }
}

int main() {
  int64_t N;
  int K;
  std::cin >> N >> K;

  for (int i = 0; i < K; ++i) {
    N = calc_new_N(N);
  }
  std::cout << N << std::endl;
}