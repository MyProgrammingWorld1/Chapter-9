//Write a function called circlearea () that find the area of a circle. It should take an argument of type float and return an argument of the same type.write main() that gets a radius value from the user,calla circarea () and display the result.

#include <iostream>
#include <cmath>  
using namespace std;

// Function declaration
float circleArea(float radius);

int main() {
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
        return 1; 
    }

    float area = circleArea(radius);

    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

float circleArea(float radius) {

    return M_PI * radius * radius;
}

