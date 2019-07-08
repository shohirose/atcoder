#include <iostream>

// Greatest common divisor
size_t gcd(size_t m, size_t n) {
    if (m < n) std::swap(m, n);
    size_t r = 1;
    while (r != 0) {
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

// Least common multiple
size_t lcm(size_t m, size_t n) {
    return (m/gcd(m, n))*n;
}

// Non-dividable numbers less than or equal to n.
size_t num_non_dividable(size_t n, size_t a, size_t b, size_t ab) {
    return n - n/a - n/b + n/ab;
}

int main() {
    size_t A, B, C, D;
    std::cin >> A >> B >> C >> D;

    const auto CD = lcm(C, D);
    const auto n1 = num_non_dividable(B, C, D, CD);
    const auto n2 = num_non_dividable(A - 1, C, D, CD);
    std::cout << n1 - n2 << std::endl;
}