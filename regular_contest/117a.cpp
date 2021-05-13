#include <iostream>
#include <numeric>
#include <vector>
 
std::vector<int64_t> generate_EA(int A, int B) {
  std::vector<int64_t> E(A);
  for (int i = 0; i < A; ++i) {
    E[i] = i + 1;
  }
  if (A < B) {
    E[A - 1] = (A + B) * (B - A + 1) / 2;
  }
  return E;
}
 
std::vector<int64_t> generate_EB(int A, int B) {
  std::vector<int64_t> E(B);
  for (int i = 0; i < B; ++i) {
    E[i] = -i - 1;
  }
  if (A > B) {
    E[B - 1] = -(A + B) * (A - B + 1) / 2;
  }
  return E;
}
 
int main() {
  int A, B;
  std::cin >> A >> B;
 
  const auto EA = generate_EA(A, B);
  const auto EB = generate_EB(A, B);
 
  for (auto&& Ei : EA) {
    std::cout << Ei << ' ';
  }
  for (auto&& Ei : EB) {
    std::cout << Ei << ' ';
  }
}