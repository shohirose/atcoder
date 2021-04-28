#include <algorithm>
#include <iostream>
#include <unordered_map>

std::pair<size_t, size_t> find_max_pair(
    const std::unordered_map<size_t, size_t>& A) {
  return *std::max_element(
      begin(A), end(A),
      [](const auto& p1, const auto& p2) { return p1.second < p2.second; });
}

int main() {
  size_t N;
  std::cin >> N;
  std::unordered_map<size_t, size_t> freq;

  for (size_t i = 0; i < N; ++i) {
    size_t A;
    std::cin >> A;
    ++freq[A];
  }

  const auto max_pair = find_max_pair(freq);
  std::cout << max_pair.first << ' ' << max_pair.second << std::endl;
}