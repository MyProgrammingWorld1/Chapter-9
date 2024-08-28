//Write a program that input and display its processor and successor number using function.

#include <iostream>
using namespace std;

// Function declaration
void displayPredecessorAndSuccessor(int number);

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Call the function to display the predecessor and successor of the number
    displayPredecessorAndSuccessor(num);

    return 0;
}

// Function definition
void displayPredecessorAndSuccessor(int number) {
    int predecessor = number - 1;
    int successor = number + 1;

    cout << "The predecessor of " << number << " is: " << predecessor << endl;
    cout << "The successor of " << number << " is: " << successor << endl;
}

