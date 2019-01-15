#include <cmath>
#include <iostream>
#include <vector>

struct point {
  int t;
  int x;
  int y;

  friend std::istream& operator>>(std::istream& is, point& p) {
    is >> p.t >> p.x >> p.y;
    return is;
  }
};

bool is_movable(const point& p1, const point& p2) {
  const auto dt   = p2.t - p1.t;
  const auto dist = abs(p1.x - p2.x) + abs(p1.y - p2.y);

  if (dt < dist)
    return false;
  else if (dt == dist)
    return true;
  else
    return (dt - dist) % 2 == 0;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<point> pts(n + 1);
  for (int i = 1; i <= n; ++i) {
    std::cin >> pts[i];
  }

  for (int i = 0; i < pts.size() - 1; ++i) {
    if (!is_movable(pts[i], pts[i + 1])) {
      std::cout << "No" << std::endl;
      return EXIT_SUCCESS;
    }
  }
  std::cout << "Yes" << std::endl;
  return EXIT_SUCCESS;
}
