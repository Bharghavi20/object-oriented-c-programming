#include <iostream>
int main() {
int num1, num2, num3;
 std::cout << "Enter the first integer: "; 
 std::cin >> num1; 
 std::cout << "Enter the second integer: "; 
 std::cin >> num2; 
 std::cout << "Enter the third integer: "; 
 std::cin >> num3;
int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
std::cout << "The largest number among " << num1 << ", " << num2 << ", and " <<
num3 << " is: " << largest << std::endl;
return 0;
}
