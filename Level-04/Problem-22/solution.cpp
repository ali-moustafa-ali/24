#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//Write a program to calculate circle area inscribed in an isosceles triangle, then print it on the screen.
struct isoscelesTriangle
{
    float base;
    float side;
};

isoscelesTriangle readIsoscelesTriangleDimensions(isoscelesTriangle& triangle)
{
    cout << "Enter triangle base: ";
    cin >> triangle.base;
    cout << "Enter triangle side: ";
    cin >> triangle.side;
    return triangle;
}
float CircleAreaInscribedInIsoscelesTriangle(isoscelesTriangle triangle)
{
    float s = triangle.side;
    float b = triangle.base;
    float areaTriangle = M_PI * pow(b, 2) / 4  * ((2 * s - b) /(2* s + b));
  return areaTriangle;
}
void printResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}   

int main()
{
    isoscelesTriangle triangle;
    readIsoscelesTriangleDimensions(triangle);
    printResult(CircleAreaInscribedInIsoscelesTriangle(triangle));
    return 0;
}