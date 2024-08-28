//Write a program that input two integers in main() and passes the integers to a function by reference. The function swap the values. The main() should display the value before and after swapping.

#include <iostream>
using namespace std;

 
void swap(int &a, int &b);

int main() {
    int num1, num2;

    
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

   
    cout << "Before swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    
    swap(num1, num2);

    // Display values after swapping
    cout << "After swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

