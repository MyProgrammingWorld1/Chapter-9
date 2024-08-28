//Write a program that uses a function mul(int,int) to determined the second integer is a multiple of the first integer. The function takes two integers argument and return 1 if the second integer is a multiple if first and 0 otherwise. The program should input a series of pairs of integers.

#include <iostream>
using namespace std;
// Function declaration
int mul(int a, int b);

int main() {
    int num1, num2;
    char continueInput;

    do {
        
        cout << "Enter the first integer: ";
        cin >> num1;

        cout << "Enter the second integer: ";
        cin >> num2;

        if (mul(num1, num2)) {
            cout << num2 << " is a multiple of " << num1 << "." << endl;
        } else {
            cout << num2 << " is not a multiple of " << num1 << "." << endl;
        }

        cout << "Do you want to check another pair? (y/n): ";
        cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    return 0;
}

int mul(int a, int b) {
    // Return 1 if b is a multiple of a, otherwise return 0
    if (a != 0 && b % a == 0) {
        return 1;
    }
    return 0;
}
