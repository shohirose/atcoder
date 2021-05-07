#include <iostream>
#include <string>
#include <vector>

struct Query {
  int T;
  int A;
  int B;
};

std::istream& operator>>(std::istream& is, Query& q) {
  is >> q.T >> q.A >> q.B;
  --q.A;
  --q.B;
  return is;
}

int main() {
  int N, Q;
  std::string S;
  std::cin >> N >> S >> Q;

  std::vector<Query> queries(Q);
  for (auto&& q : queries) {
    std::cin >> q;
  }

  auto s1 = S.substr(0, N);
  auto s2 = S.substr(N, N);

  for (auto [T, A, B] : queries) {
    if (T == 1) {
      if (B < N) {
        std::swap(s1[A], s1[B]);
      } else if (A >= N) {
        std::swap(s2[A - N], s2[B - N]);
      } else {
        std::swap(s1[A], s2[B - N]);
      }
    } else {
      std::swap(s1, s2);
    }
  }

  std::cout << s1 << s2 << std::endl;
}