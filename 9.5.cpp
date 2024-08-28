//Write a program that input a number in main () and passes the number to a function. The function display the factorial of that number.

#include <iostream>
using namespace std;
// Function declaration
unsigned long long factorial(int number);

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Ensure the number is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the function to calculate and display the factorial
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}

// Function definition
unsigned long long factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
