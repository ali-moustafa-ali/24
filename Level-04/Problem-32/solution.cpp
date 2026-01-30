#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// read n and m n is the base and m is the exponent
int readn(int &n)
{
    cout << "Enter the base (n): ";
    cin >> n;
    return n;
}
int readm(int &m)
{
    cout << "Enter the exponent (m): ";
    cin >> m;
    return m;
}
int power(int base, int exponent)
{
    if (exponent == 0)
        return 1; // any number to the power of 0 is 1
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base; // result = result * base
    }
    return result;
}
int main()
{
    int n, m;
    int result = power(readn(n), readm(m));
    cout << n << " raised to the power of " << m << " is: " << result << endl;
    return 0;
}