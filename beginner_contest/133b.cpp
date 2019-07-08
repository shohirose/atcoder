#include <iostream>
#include <vector>
#include <cmath>

double distance(const std::vector<int>& x1, const std::vector<int>& x2) {
    int sum = 0;
    for (size_t i = 0; i < x1.size(); ++i) {
        const auto dx = x1[i] - x2[i];
        sum += dx*dx;
    }
    return std::sqrt(sum);
}

bool is_integer(double x) {
    constexpr double tol = 1e-3;
    return std::fabs(x - std::round(x)) < tol;
}

int main() {
    int n, d;
    std::cin >> n >> d;

    std::vector<std::vector<int>> x(n);
    for (auto&& xi : x) {
        xi.resize(d);
        for (auto&& xij : xi) std::cin >> xij;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            const double dist = distance(x[i], x[j]);
            if (is_integer(dist)) ++count;
        }
    }
    std::cout << count << std::endl;
}