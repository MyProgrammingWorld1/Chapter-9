//Write a program with two function area and perimeter to find the area and perimeter of a square.

#include <iostream>
using namespace std;
 
double calculateArea(double side);
double calculatePerimeter(double side);

int main() {
    double sideLength;
 
    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    if (sideLength <= 0) {
        cout << "Side length must be positive." << endl;
        return 1; // Exit with error code
    }

    double area = calculateArea(sideLength);
    double perimeter = calculatePerimeter(sideLength);

    cout << "The area of the square is: " << area << endl;
    cout << "The perimeter of the square is: " << perimeter << endl;

    return 0;
}

double calculateArea(double side) {
    return side * side;
}

double calculatePerimeter(double side) {
    return 4 * side;
}

