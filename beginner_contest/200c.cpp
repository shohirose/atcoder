#include <iostream>
#include <numeric>
#include <vector>

int read_N(std::istream& is) {
  int N;
  is >> N;
  return N;
}

std::vector<int64_t> read_A(std::istream& is, int N) {
  std::vector<int64_t> A(N);
  for (auto&& Ai : A) {
    is >> Ai;
  }
  return A;
}

std::vector<int64_t> create_num_residues(const std::vector<int64_t>& numbers,
                                         int64_t divisor) {
  std::vector<int64_t> num_residues(divisor, 0);
  for (auto&& number : numbers) {
    const auto residue = number % divisor;
    ++num_residues[residue];
  }
  return num_residues;
}

size_t count_combinations_of_same_residues(
    const std::vector<int64_t>& num_residues) {
  return std::accumulate(
      num_residues.begin(), num_residues.end(), size_t{0},
      [](size_t accum, int64_t n) { return accum + n * (n - 1) / 2; });
}

int main() {
  const auto N = read_N(std::cin);
  const auto A = read_A(std::cin, N);
  const auto num_residues = create_num_residues(A, 200);
  const auto num_comb = count_combinations_of_same_residues(num_residues);
  std::cout << num_comb << std::endl;
}