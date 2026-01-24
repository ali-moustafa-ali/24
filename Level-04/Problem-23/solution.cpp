#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// Write a program to calculate circle area circle described around an arbitrary triangle, then print it on the screen.
struct arbitraryTriangle
{
    float sideA;
    float sideB;
    float sideC;
};

arbitraryTriangle readArbitraryTriangleDimensions(arbitraryTriangle& triangle)
{
    cout << "Enter triangle side A: ";
    cin >> triangle.sideA;
    cout << "Enter triangle side B: ";
    cin >> triangle.sideB;
    cout << "Enter triangle side C: ";
    cin >> triangle.sideC;
    return triangle;
}

float CircleAreaInscribedInArbitraryTriangle(arbitraryTriangle triangle)
{
    float a = triangle.sideA;
    float b = triangle.sideB;
    float c = triangle.sideC;
    float p = (a + b + c) / 2;
    float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float areaArbitraryTriangle = M_PI * pow(t, 2);

  return areaArbitraryTriangle;
}
void printResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}   

int main()
{
    arbitraryTriangle triangle;
    readArbitraryTriangleDimensions(triangle);
    printResult(CircleAreaInscribedInArbitraryTriangle(triangle));
    return 0;
}