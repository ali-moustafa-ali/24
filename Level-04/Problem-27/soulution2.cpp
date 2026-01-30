#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readNumber(int& n)
{
    cout << "Enter a positive integer n: ";
    cin >> n;
}

// print numbers from n to 1 using 3 different loops: for, while, do-while using function 
void printNumbersUsingForLoop(int n) // using if i know range of loop
{
    for(int i = n; i >= 1; i--)
    {
        cout << i << endl;
    };
    cout << endl;
}
void printNumbersUsigWhileLoop(int n) // using if i dont know range of loop
{
    int i = n + 1;
    while(i > 1)
    {
        i--;    
        cout << i << endl;
      
    }
    cout << endl;
}
void printNumbersUsingDoWhileLoop(int n) // using if i want to execute loop at least once
{
    int i = n + 1   ;
  do {
    i--;
    cout << i << endl;
  } while (i > 1);
  cout << endl;
}


int main()
{
    int n;
    readNumber(n);
    cout << "Using For Loop:" << endl;
    printNumbersUsingForLoop(n);

    cout << "Using While Loop:" << endl;
    printNumbersUsigWhileLoop(n);

    cout << "Using Do-While Loop:" << endl;
    printNumbersUsingDoWhileLoop(n);
    return 0;
}

