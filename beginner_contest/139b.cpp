#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int ntap = 0;
    int nsocket = 1;
    while (nsocket < b){
        nsocket += a - 1;
        ++ntap;
    }

    std::cout <<  ntap << std::endl;
}