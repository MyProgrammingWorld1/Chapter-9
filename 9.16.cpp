//Write a function called circlearea () that find the area of a circle. It should take an argument of type float and return an argument of the same type.write main() that gets a radius value from the user,calla circarea () and display the result.

#include <iostream>
#include <cmath>  
using namespace std;

// Function declaration
float circleArea(float radius);

int main() {
    float radius;

    // Input radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Validate input
    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
        return 1; // Exit with error code
    }

    // Call the function to calculate the area of the circle
    float area = circleArea(radius);

    // Display the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

// Function definition
float circleArea(float radius) {
    // Use the formula for the area of a circle: ? * radius^2
    return M_PI * radius * radius;
}

