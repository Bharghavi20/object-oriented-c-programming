#include <iostream>
int main() {
double num;
 std::cout << "Enter a number: "; 
 std::cin >> num;
 if (num > 0) {
std::cout << num << " is positive." << std::endl;
} else if (num < 0) { std::cout << num << " is negative." << std::endl;
} else { std::cout << num << " is zero." << std::endl;
}
return 0;
}
