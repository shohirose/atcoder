#include <iostream>
#include <numeric>
#include <vector>

std::vector<int64_t> create_num_residues(const std::vector<int64_t>& numbers,
                                         int64_t divisor) {
  std::vector<int64_t> num_residues(divisor, 0);
  for (auto&& number : numbers) {
    const auto residue = number % divisor;
    ++num_residues[residue];
  }
  return num_residues;
}

size_t count_combination_of_same_residues(
    const std::vector<int64_t>& num_residues) {
  return std::accumulate(
      num_residues.begin(), num_residues.end(), size_t{0},
      [](size_t accum, int64_t n) { return accum + n * (n - 1) / 2; });
}

int main() {
  int N;
  std::cin >> N;

  std::vector<int64_t> A(N);
  for (auto&& Ai : A) {
    std::cin >> Ai;
  }

  const auto num_residues = create_num_residues(A, 200);
  const auto num_comb = count_combination_of_same_residues(num_residues);

  std::cout << num_comb << std::endl;
}