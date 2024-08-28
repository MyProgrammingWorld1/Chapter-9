//Write a program that input two integers in main() and passes the integers to a function by reference. The function swap the values. The main() should display the value before and after swapping.

#include <iostream>
using namespace std;

// Function declaration
void swap(int &a, int &b);

int main() {
    int num1, num2;

    // Input two integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Display values before swapping
    cout << "Before swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    // Call the function to swap the values
    swap(num1, num2);

    // Display values after swapping
    cout << "After swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}

// Function definition
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

