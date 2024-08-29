#include <iostream>

int sum_from_to(int first, int last) {
    // Ensure that first is less than or equal to last
    if (first > last) {
        std::swap(first, last); // Swap values if needed
    }

    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i; // Accumulate the sum
    }

    return sum; // Return the calculated sum
}

int main() {
    int first, last;

    // Example usage
    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the last integer: ";
    std::cin >> last;

    int result = sum_from_to(first, last);
    std::cout << "The sum of integers from " << first << " to " << last << " is: " << result << std::endl;

    return 0;
}
