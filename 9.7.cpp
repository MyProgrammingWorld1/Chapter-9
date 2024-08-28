//Write a program to read a number from the key board and pass it to a function to determine whether its prime or composite.

#include <iostream>
using namespace std;
// Function declaration
bool isPrime(int number);

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is prime or composite
    if (num <= 1) {
        cout << num << " is neither prime nor composite." << endl;
    } else if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is a composite number." << endl;
    }

    return 0;
}

// Function definition
bool isPrime(int number) {
    if (number <= 1) return false;  // 0 and 1 are not prime
    if (number <= 3) return true;   // 2 and 3 are prime
    if (number % 2 == 0 || number % 3 == 0) return false;  // Multiple of 2 or 3
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}


