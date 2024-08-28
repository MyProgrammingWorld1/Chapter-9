//Write a program that input marks in main function and passes these marks to a function. The function find grade of student on the basis of following criteria
//Grade A      80 or above marks 
//Grade B      60 to 79 marks 
//Grade C      40 to 59 marks
//Grade F       Below 40 marks.


#include <iostream>
using namespace std;
// Function declaration
char findGrade(int marks);

int main() {
    int marks;

    // Input marks from the user
    cout << "Enter the marks: ";
    cin >> marks;

    // Call the function to find the grade
    char grade = findGrade(marks);

    // Display the grade
    cout << "The grade is: " << grade << endl;

    return 0;
}

// Function definition
char findGrade(int marks) {
    if (marks >= 80) {
        return 'A';  // Grade A for 80 or above marks
    } else if (marks >= 60) {
        return 'B';  // Grade B for 60 to 79 marks
    } else if (marks >= 40) {
        return 'C';  // Grade C for 40 to 59 marks
    } else {
        return 'F';  // Grade F for below 40 marks
    }
}

