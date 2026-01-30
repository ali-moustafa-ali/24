#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int readPositiveNumber(string message)
{
    int Number;
    do
    {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int factorial(int n)
{
    int fact = 1;
    for (int counter = 1; counter <= n; counter++)
    {
        fact *= counter; // fact = fact * counter
    // n = 3
    // 3! = 3 * 2 * 1 = 6
        // first iteration 1 = 1 * 1
        // second iteration 2 = 1 * 2
        // third iteration 6 = 2 * 3
        // factorial of 3 is 6
        // 4! = 4 * 3 * 2 * 1 = 24
        // 5! = 5 * 4 * 3 * 2 * 1 = 120
        // 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
        // 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1 = 5040
        // 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 40320
        // 9! = 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 362880
    }
    return fact;
}
int main()
{
    int n = readPositiveNumber("Enter a positive integer to calculate its factorial: ");
    cout << "Factorial is: " << factorial(n) << endl;
    return 0;
}