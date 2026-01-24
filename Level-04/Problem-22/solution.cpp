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
    float height = sqrt(pow(triangle.side, 2) - pow(triangle.base / 2, 2));
    float radius = (triangle.base * height) / (2 * (triangle.base + 2 * height));
    float Area = M_PI * pow(radius, 2);
    return Area;
}
void printResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}   

int main()
{
    isoscelesTriangle triangle;
    readIsoscelesTriangleDimensions(triangle);
    float area = CircleAreaInscribedInIsoscelesTriangle(triangle);
    printResult(area);
    return 0;
}