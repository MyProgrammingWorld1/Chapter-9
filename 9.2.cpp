#include <iostream>
using namespace std;

// Function to display the maximum of two numbers
void displayMax(int num1, int num2) {
    if (num1 > num2) {
        cout << "The maximum number is: " << num1 << endl;
    } else {
        cout << "The maximum number is: " << num2 << endl;
    }
}

int main() {
    int number1, number2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Call the function to display the maximum number
    displayMax(number1, number2);

    return 0;
}

