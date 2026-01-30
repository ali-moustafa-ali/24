#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readNumber(int& n)
{
    cout << "Enter a positive integer n: ";
    cin >> n;
}

// print numbers from 1 to n using 3 different loops: for, while, do-while using function 
void printNumbersUsingForLoop(int n) // using if i know range of loop
{
    for(int i = 1; i <=n; i++)
    {
        cout << i << endl;
    };
    cout << endl;
}
void printNumbersUsigWhileLoop(int n) // using if i dont know range of loop
{
    int i = 1;
    while(i <= n)
    {
        cout << i << endl;
        i++;
    }
    cout << endl;
}
void printNumbersUsingDoWhileLoop(int n) // using if i want to execute loop at least once
{
    int i = 1;
  do {
    cout << i << endl;
    i++;
  } while (i <= n);
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

