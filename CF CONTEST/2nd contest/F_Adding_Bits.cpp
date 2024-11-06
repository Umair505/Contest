#include <iostream>

int main() {
    // Input
    unsigned int A, B;
    std::cin >> A >> B;

    // Bitwise addition without considering carry
    unsigned int result = A ^ B;

    // Output
    std::cout << result << std::endl;

    return 0;
}
