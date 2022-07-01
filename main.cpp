
#include <iomanip>
#include <iostream>
#include <string>
#include "student.h"
using namespace std;


void displayData(student mystudent)
{
    cout << setprecision(2) << fixed;
    cout << mystudent.fName() << "  " << mystudent.lName() << endl;
    cout << "GPA " << mystudent.GPA() << endl;
    cout << "Credits Earned: " << mystudent.creditsTaken() << endl;
    cout << "Class Standing: " << mystudent.standing() << endl;
}

int main()
{
    string fName, lName, standing;
    float gpa, credits;
    student mystudent;
    
    cout << "Enter first name: ";
    cin >> fName;
    cout << endl << "Enter last name: ";
    cin >> lName;
    cout << endl << "Enter GPA: ";
    cin >> gpa;
    cout << endl << "Enter credits taken: ";
    cin >> credits;
    
    mystudent.fName(fName);
    mystudent.lName(lName);
    mystudent.GPA(gpa);
    mystudent.creditsTaken(credits);
    mystudent.standing(credits);
    displayData(mystudent);
    
    return 0;
}

