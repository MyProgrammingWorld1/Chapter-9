//Write a program that input and display its processor and successor number using function.

#include <iostream>
using namespace std;
 
void displayPredecessorAndSuccessor(int number);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayPredecessorAndSuccessor(num);

    return 0;
}

void displayPredecessorAndSuccessor(int number) {
    int predecessor = number - 1;
    int successor = number + 1;

    cout << "The predecessor of " << number << " is: " << predecessor << endl;
    cout << "The successor of " << number << " is: " << successor << endl;
}

