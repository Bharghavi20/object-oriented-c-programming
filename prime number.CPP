#include <iostream>
// Function to check if a number is prime bool isPrime(int n) {
if (n <= 1) {
return false; // 0 and 1 are not prime numbers
}
for (int i = 2; i * i <= n; ++i) {
if (n % i == 0) {
return false; // n is divisible by i, hence not prime
}
}
return true; // n is prime
}
int main() {
int number; std::cout << "Enter a number: "; std::cin >> number;
if (isPrime(number)) {
std::cout << number << " is a prime number." << std::endl;
} else { std::cout << number << " is not a prime number." << std::endl;
}
return 0;
}
