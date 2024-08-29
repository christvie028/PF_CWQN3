#include <iostream>

int gcd(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int reduce(int& num, int& denom) {
    // Check if either num or denom is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    // Calculate the GCD of num and denom
    int g = gcd(num, denom);

    // Divide num and denom by their GCD
    num /= g;
    denom /= g;

    return 1;
}

int main() {
    int num, denom;

    // Example usage
    std::cout << "Enter the numerator: ";
    std::cin >> num;
    std::cout << "Enter the denominator: ";
    std::cin >> denom;

    if (reduce(num, denom) == 0) {
        std::cout << "Invalid input: numerator or denominator cannot be zero or negative." << std::endl;
    } else {
        std::cout << "The reduced fraction is: " << num << "/" << denom << std::endl;
    }

    return 0;
}
