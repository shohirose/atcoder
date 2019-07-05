#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

struct Tuple {
    int a;
    int b;
    int c;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Tuple> h(n);
    for (auto&& hi : h) std::cin >> hi.a >> hi.b >> hi.c;

    std::vector<Tuple> cost(n);
    cost[0] = h[0];
    for (int i = 1; i < n; ++i) {
        auto& ci = cost[i];
        const auto& cii = cost[i-1];
        ci.a = std::max(cii.b, cii.c) + h[i].a;
        ci.b = std::max(cii.a, cii.c) + h[i].b;
        ci.c = std::max(cii.a, cii.b) + h[i].c;
    }
    const auto& cn = cost[n-1];
    std::cout << std::max({cn.a, cn.b, cn.c}) << std::endl;
}