#include <vector>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> p(n);
    for (auto&& pi : p) std::cin >> pi;

    int m = 0;
    for (int i = 1; i < n - 1; ++i)
        if ((p[i-1] < p[i] && p[i] < p[i+1]) || (p[i-1] > p[i] && p[i] > p[i+1])) ++m;
    
    std::cout << m << std::endl;
}