#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int readGrade(int &grade)
{
    cout << "Enter the grade (0-100): ";
    while (grade < 0 || grade > 100)
    {
        cin >> grade;
        if (grade < 0 || grade > 100)
            cout << "Invalid input. Please enter a grade between 0 and 100: ";
    }
    return grade;
}

void printLetterGrade(int grade)
{
    if (grade >= 90)
        cout << "Letter Grade: A" << endl;
    else if (grade >= 80)
        cout << "Letter Grade: B" << endl;
    else if (grade >= 70)
        cout << "Letter Grade: C" << endl;
    else if (grade >= 60)
        cout << "Letter Grade: D" << endl;
    else
        cout << "Letter Grade: F" << endl;
}

int main()
{
    int grade;
    readGrade(grade);
    printLetterGrade(grade);
    return 0;
}