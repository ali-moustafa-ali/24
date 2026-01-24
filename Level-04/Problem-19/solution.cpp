#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
// write a program that does calclate the area of a circle by dimiterter of circle
void readdiameter(double &d) {
    cout << "Enter the diameter of the circle: ";
    cin >> d;
}   
double calculateCircleAreaByDimiter(double d) {
    double r = d / 2.0;
    return (M_PI * pow(d,2)) / 4.0;
}  
void displayarea(double area) {
    cout << "The area of the circle  is: " << area << endl;
}


int main() {
    double diameter;
    readdiameter(diameter);
    displayarea(calculateCircleAreaByDimiter(diameter));
    return 0;
}
 