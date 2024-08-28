//Write a program that input a number in main() and passes the number to a function. The function display table of that number.

#include <iostream>
using namespace std;

void displayTable(int number);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayTable(num);

    return 0;
}

void displayTable(int number) {
    cout << "Multiplication table for " << number << " is:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}


