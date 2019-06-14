#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
class Board {
 public:
  Board(int h, int w) : w_{w}, h_{h}, s_(h * w) {}

  auto& operator()(int i, int j) noexcept { return s_[w_ * i + j]; }
  const auto& operator()(int i, int j) const noexcept { return s_[w_ * i + j]; }

  auto begin() { return s_.begin(); }
  auto end() { return s_.end(); }

  auto begin() const { return s_.begin(); }
  auto end() const { return s_.end(); }

 private:
  int w_;
  int h_;
  std::vector<T> s_;
};

int main() {
  int h, w;
  std::cin >> h >> w;

  Board<char> s(h, w);
  for (int i = 0; i < h; ++i) {
    std::string si;
    std::cin >> si;
    for (int j = 0; j < w; ++j) s(i, j) = si[j];
  }

  Board<int> l(h, w);
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (s(i, j) == '#')
        l(i, j) = 0;
      else if (j == 0)
        l(i, j) = 1;
      else
        l(i, j) = l(i, j - 1) + 1;
    }
  }

  Board<int> r(h, w);
  for (int i = 0; i < h; ++i) {
    for (int j = w - 1; j >= 0; --j) {
      if (s(i, j) == '#')
        r(i, j) = 0;
      else if (j == w - 1)
        r(i, j) = 1;
      else
        r(i, j) = r(i, j + 1) + 1;
    }
  }

  Board<int> u(h, w);
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (s(i, j) == '#')
        u(i, j) = 0;
      else if (i == 0)
        u(i, j) = 1;
      else
        u(i, j) = u(i - 1, j) + 1;
    }
  }

  Board<int> d(h, w);
  for (int i = h - 1; i >= 0; --i) {
    for (int j = 0; j < w; ++j) {
      if (s(i, j) == '#')
        d(i, j) = 0;
      else if (i == h - 1)
        d(i, j) = 1;
      else
        d(i, j) = d(i + 1, j) + 1;
    }
  }

  Board<int> count(h, w);
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j)
      count(i, j) = l(i, j) + r(i, j) + u(i, j) + d(i, j) - 3;
  }

  const auto it = std::max_element(count.begin(), count.end());
  std::cout << *it << std::endl;
}
