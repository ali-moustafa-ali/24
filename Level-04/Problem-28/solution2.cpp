#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum evenOrodd { even, odd };

void readNumber(int& n)
{
    cout << "Enter a positive integer n: ";
    cin >> n;
}

evenOrodd checkEvenOrOdd(int n)
{
    if (n % 2 == 0)
        return even;
    else
        return odd;
}



// sum odd numbers from 1 to n using 3 different loops: for, while, do-while using function 
    int sumOddNumbersUsingForLoop(int n) // using if i know range of loop
    {
        int sum = 0;
        for(int i =1; i<=n; i++) 
        {
            if (checkEvenOrOdd(i) == odd)
            sum += i; // sum = sum + i
        };
        return sum;
    }
int sumOddNumbersUsigWhileLoop(int n) // using if i dont know range of loop
{
    int sum = 0;
    int i = 1;
    while(i <= n)
    {

        if (checkEvenOrOdd(i) == odd)
        {
            sum += i;
            i++;
        }
      
            i++;
      
    }
    return sum;
}
int sumOddNumbersUsingDoWhileLoop(int n) // using if i want to execute loop at least once
{
    int sum = 0;
    int i = 1;
  do {
    if (checkEvenOrOdd(i) == odd)
    {
        sum += i;
        i++;
    }
    
        i++;

  } while (i <= n);
  return sum;
}       


int main()
{
    int n;
    readNumber(n);
    cout << "Using For Loop, Sum of odd numbers from 1 to " << n << " is: " << sumOddNumbersUsingForLoop(n) << endl;
    cout << "Using While Loop, Sum of odd numbers from 1 to " << n << " is: " << sumOddNumbersUsigWhileLoop(n) << endl;
    cout << "Using Do-While Loop, Sum of odd numbers from 1 to " << n << " is: " << sumOddNumbersUsingDoWhileLoop(n) << endl;

    return 0;
}

