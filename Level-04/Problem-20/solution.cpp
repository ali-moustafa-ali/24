#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadSquareSide(float& side)
{
    cout << "Enter square side: ";
    cin >> side;
    return side;
}


float CircleAreaInscribedInSquare(float A)
{
    float Area = (M_PI * pow(A, 2)) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    float side;
    side = ReadSquareSide(side);
    PrintResult(CircleAreaInscribedInSquare(side));

    return 0;
}