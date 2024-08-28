//Write a program to check whether a number is prime number, even or  odd number using function.

#include <iostream>
using namespace std;

// Function declarations
bool isPrime(int number);
bool isEven(int number);
bool isOdd(int number);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    if (isEven(num)) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}
 
bool isEven(int number) {
    return number % 2 == 0;
}
 
bool isOdd(int number) {
    return number % 2 != 0;
}

