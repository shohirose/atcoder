#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    bool ok = true;
    for (int i = 0; i < 4; ++i) {
        const auto n = std::count(s.begin(), s.end(), s[i]);
        if (n != 2) {
            ok = false;
            break;
        }
    }
    std::cout << (ok ? "Yes" : "No") << std::endl;
}