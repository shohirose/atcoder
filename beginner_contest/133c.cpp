#include <iostream>
#include <algorithm>

size_t min_mod(size_t L, size_t R) {
    constexpr size_t DENOM = 2019;
    if (R - L >= DENOM)
        return 0;
    else {
        size_t min = DENOM - 1;
        for (size_t i = L; i < R; ++i)
            for (size_t j = i + 1; j <= R; ++j)
                min = std::min(min, (i*j)%DENOM);
        return min;
    }
}

int main() {
    size_t L, R;
    std::cin >> L >> R;
    std::cout << min_mod(L, R) << std::endl;
}