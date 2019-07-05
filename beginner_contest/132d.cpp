#include <vector>
#include <iostream>

constexpr size_t DENOM = 1'000'000'007;

std::vector<size_t> binominal(size_t n, size_t r) {
    std::vector<size_t> v(r + 1, 0);
    v[0] = 1;

    for (size_t i = 1; i <= n; ++i) {
        for (size_t j = r; j > 0; --j) {
            v[j] += v[j - 1];
            if (v[j] > DENOM) v[j] = v[j] % DENOM;
        }
    }

    return v;
}

int main() {
    size_t n, k;
    std::cin >> n >> k;

    const auto c1 = binominal(n - k + 1, k);
    const auto c2 = binominal(k - 1, k - 1);

    for (size_t i = 1; i <= k; ++i)
        std::cout << (c1[i]*c2[i-1] % DENOM) << std::endl;
}