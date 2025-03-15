#include <iostream>  // Include the standard input-output library

// Function to count even digits in a number recursively
// n: the number to process (long long)
// ans: reference to an integer that will store the count of even digits (int&)
void evendigits(long long n, int& ans) {
    // Base case: if the number is 0, stop recursion
    if (n == 0) {
        return;
    }

    // Extract the last digit of the number
    int lastDigit = n % 10;

    // Check if the last digit is even
    if (lastDigit % 2 == 0) {
        ans++;  // Increment the count of even digits
    }

    // Remove the last digit and make a recursive call
    evendigits(n / 10, ans);
}

int main() {
    // Example usage of the evendigits function
    long long number = 9223372036854775806LL;  // The number to process
    int ans = 0;  // Variable to store the count of even digits

    // Call the function to count even digits
    evendigits(number, ans);

    // Output the result
    std::cout << "Number of even digits: " << ans << std::endl;

    return 0;  // Indicate successful program termination
}