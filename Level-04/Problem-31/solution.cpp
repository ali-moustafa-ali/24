#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// write program to read number and put this number power for 2,3,4 without using function 
void readNumber(int& n)
{
    cout << "Enter a number: ";
    cin >> n;
}

int powerOf2_3_4(int base){
   int a, b, c;
   a = base * base; // power 2
   b = a * base;   // power 3
   c = b * base;   // power 4
    cout << "Power of 2 is: " << a << endl;
    cout << "Power of 3 is: " << b << endl;
    cout << "Power of 4 is: " << c << endl;
}
int main()
{
    int n;
    readNumber(n);
    powerOf2_3_4(n);

    return 0;
}