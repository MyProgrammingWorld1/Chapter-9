//Write a program that input a number in main() and passes the number to a function. The function display table of that number.

#include <iostream>
using namespace std;

// Function declaration
void displayTable(int number);

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Call the function to display the table of the number
    displayTable(num);

    return 0;
}

// Function definition
void displayTable(int number) {
    cout << "Multiplication table for " << number << " is:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}


