
#include <iomanip>
#include <iostream>
#include <string>
#include "student.h"
#include "gradStudent.h"
using namespace std;

void displayData(student mystudent)
{
    cout << setprecision(2) << fixed;
    cout << mystudent.fName() << "  " << mystudent.lName() << endl;
    cout << "GPA " << mystudent.GPA() << endl;
    cout << "Credits Earned: " << mystudent.creditsTaken() << endl;
    cout << "Class Standing: " << mystudent.standing() << endl;
    cout << endl;
}
void displayData(GradStudent mygradstudent)
{
    cout << setprecision(2) << fixed;
    cout << mygradstudent.fName() << "  " << mygradstudent.lName() << endl;
    cout << "GPA " << mygradstudent.GPA() << endl;
    cout << "Credits Earned: " << mygradstudent.creditsTaken() << endl;
    cout << "Class Standing: " << mygradstudent.standing() << endl;
    cout << "TA Pay: $" << mygradstudent.TApay() << endl;
}
int main()
{
    string fName, lName, standing;
    float gpa, credits, tapay;
    student mystudent;
    GradStudent mygradstudent;
    
    cout << "Undergraduate Student:" << endl;
    displayData(mystudent);
    cout << endl << endl;
    
    cout << "Undergraduate:" << endl;
    cout << "Enter first name: ";
    cin >> fName;
    cout << endl << "Enter last name: ";
    cin >> lName;
    cout << endl << "Enter GPA: ";
    cin >> gpa;
    cout << endl << "Enter credits taken: ";
    cin >> credits;
    cout << endl;
    
    mystudent.fName(fName);
    mystudent.lName(lName);
    mystudent.GPA(gpa);
    mystudent.creditsTaken(credits);
    mystudent.standing(credits);
    displayData(mystudent);
    
    cout << "Graduate Student:";
    cout << endl << endl;
    
    cout << "Enter first name: ";
    cin >> fName;
    cout << endl << "Enter last name: ";
    cin >> lName;
    cout << endl << "Enter GPA: ";
    cin >> gpa;
    cout << endl << "Enter credits taken: ";
    cin >> credits;
    cout << endl << "Enter TA Pay: $";
    cin >> tapay;
    
    mygradstudent.fName(fName);
    mygradstudent.lName(lName);
    mygradstudent.GPA(gpa);
    mygradstudent.creditsTaken(credits);
    mygradstudent.standing(credits);
    mygradstudent.TApay(tapay);
    displayData(mygradstudent);
    
    return 0;
}

