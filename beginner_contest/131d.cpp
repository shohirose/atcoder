#include <algorithm>
#include <iostream>
#include <vector>

struct Task {
  size_t a;
  size_t b;
};

int main() {
  size_t n;
  std::cin >> n;

  std::vector<Task> task(n);
  for (auto&& ti : task) std::cin >> ti.a >> ti.b;

  std::sort(task.begin(), task.end(),
            [](const auto& ti, const auto& tj) { return ti.b < tj.b; });

  const auto is_feasible = [&task]() {
    auto cum = task[0].a;
    if (cum > task[0].b) return false;
    for (size_t i = 1; i < task.size(); ++i) {
      cum += task[i].a;
      if (cum > task[i].b) return false;
    }
    return true;
  }();

  std::cout << (is_feasible ? "Yes" : "No") << std::endl;
}