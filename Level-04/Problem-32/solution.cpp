#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// read n and m n is the base and m is the exponent
void readNumbers(int& n, int& m)
{
    cout << "Enter base (n): ";
    cin >> n;
    cout << "Enter exponent (m): ";
    cin >> m;
}
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base; // result = result * base
    }
    return result;
}
int main()
{
    return 0;
}