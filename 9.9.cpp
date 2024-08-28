//Write a program that input two numbers and one arithmetic operator in main() and passes them to a function. The function applies arithmetic operator on two numbers on the basis of the operator entered by user using switch statement.

#include <iostream>
using namespace std;
 
void performOperation(double num1, double num2, char op);

int main() {
    double number1, number2;
    char operatorChar;
 
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter an arithmetic operator (+, -, *, /): ";
    cin >> operatorChar;
 
    performOperation(number1, number2, operatorChar);

    return 0;
}

// Function definition
void performOperation(double num1, double num2, char op) {
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
}

