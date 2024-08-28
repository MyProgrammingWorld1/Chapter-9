#include <iostream>
using namespace std;


void displayMax(int num1, int num2) {
    if (num1 > num2) {
        cout << "The maximum number is: " << num1 << endl;
    } else {
        cout << "The maximum number is: " << num2 << endl;
    }
}

int main() {
    int number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    displayMax(number1, number2);

    return 0;
}

