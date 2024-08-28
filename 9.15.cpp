//Write a program that input two integers. It passes first integer to a function that calculate and return its square. It passes second integer to another function that calculate and return its cube. The main() function adds both return value and display the result.

#include <iostream>
using namespace std;
// Function declarations
int calculateSquare(int number);
int calculateCube(int number);

int main() {
    int num1, num2;

    // Input two integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Call the functions to calculate square and cube
    int square = calculateSquare(num1);
    int cube = calculateCube(num2);

    // Add the results and display the total
    int total = square + cube;
    cout << "The square of " << num1 << " is: " << square << endl;
    cout << "The cube of " << num2 << " is: " << cube << endl;
    cout << "The sum of the square and the cube is: " << total << endl;

    return 0;
}

// Function definitions
int calculateSquare(int number) {
    return number * number;
}

int calculateCube(int number) {
    return number * number * number;
}

