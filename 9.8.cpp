//Write a program with two function area and perimeter to find the area and perimeter of a square.

#include <iostream>
using namespace std;
// Function declarations
double calculateArea(double side);
double calculatePerimeter(double side);

int main() {
    double sideLength;

    // Input the side length of the square from the user
    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    // Check if the input is valid
    if (sideLength <= 0) {
        cout << "Side length must be positive." << endl;
        return 1; // Exit with error code
    }

    // Calculate area and perimeter
    double area = calculateArea(sideLength);
    double perimeter = calculatePerimeter(sideLength);

    // Display the results
    cout << "The area of the square is: " << area << endl;
    cout << "The perimeter of the square is: " << perimeter << endl;

    return 0;
}

// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a square
double calculatePerimeter(double side) {
    return 4 * side;
}

