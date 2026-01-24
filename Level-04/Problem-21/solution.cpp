#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//Write a program to calculate circle area along the circumference, then print it on the screen.
float readCircleCircumference(float& circumference)
{
    cout << "Enter circle circumference: ";
    cin >> circumference;
    return circumference;
}
float CircleAreaByCircumference(float circumference)
{
    float Area = pow(circumference, 2) / (4 * M_PI);
    return Area;
}

void printResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    float circumference;
    readCircleCircumference(circumference);
    float area = CircleAreaByCircumference(circumference);
    printResult(area);
    return 0;
}