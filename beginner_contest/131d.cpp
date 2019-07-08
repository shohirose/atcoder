#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    size_t a;
    size_t b;
};

int main() {
    size_t n;
    std::cin >> n;

    std::vector<Task> task(n);
    for (auto&& ti : task) std::cin >> ti.a >> ti.b;

    std::sort(task.begin(), task.end(), [](const auto& ti, const auto& tj){
        return ti.b < tj.b;
    });

    std::vector<size_t> cum(n + 1);
    cum[0] = 0;
    bool is_feasible = true;
    for (size_t i = 1; i <= n; ++i) {
        cum[i] = cum[i - 1] + task[i - 1].a;
        if (cum[i] > task[i - 1].b) {
            is_feasible = false;
            break;
        }
    }
    
    std::cout << (is_feasible ? "Yes" : "No") << std::endl;
}