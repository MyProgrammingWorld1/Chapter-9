//Write a program that inputs number and character. It passes the input to a function that display n number of column and rows of given character.

#include <iostream>
using namespace std;

// Function declaration
void displayGrid(int rows, int columns, char character);

int main() {
    int numRows, numColumns;
    char ch;

    // Input the number of rows, columns, and character from the user
    cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << "Enter the number of columns: ";
    cin >> numColumns;

    cout << "Enter a character to display: ";
    cin >> ch;

    // Validate input
    if (numRows <= 0 || numColumns <= 0) {
        cout << "Number of rows and columns must be positive integers." << endl;
        return 1; // Exit with error code
    }

    // Call the function to display the grid
    displayGrid(numRows, numColumns, ch);

    return 0;
}

// Function definition
void displayGrid(int rows, int columns, char character) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << character << ' ';
        }
        cout << endl;
    }
}

