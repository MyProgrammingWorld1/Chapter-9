//Write a program that input base and height of a triangle in main function and passes them to a function. The function finds the area of triangle and return it to main function where it display in the screen.

#include <iostream>
using namespace std;
// Function declaration
double calculateArea(double base, double height);

int main() {
    double base, height;

    // Input base and height of the triangle from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Call the function to calculate the area
    double area = calculateArea(base, height);

    // Display the area
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}

// Function definition
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

