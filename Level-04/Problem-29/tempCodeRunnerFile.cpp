#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readNumber(int& n)
{
    cout << "Enter a positive integer n: ";
    cin >> n;
}
enum evenOrodd { even, odd };


evenOrodd checkEvenOrOdd(int n)
{
    if (n % 2 == 0)
        return even;
    else
        return odd;
}

// sum even numbers from 1 to n using 3 different loops: for, while, do-while using function 
    int sumEvenNumbersUsingForLoop(int n) // using if i know range of loop
    {
        int sum = 0; /* You must assign an initial value when you declare a variable.
        must initialize sum to 0, because garbage value may be there, when you */ 
        
        for(int counter = 0; counter <= n; counter++) // counter+=2 = counter = counter + 2 // increment by 2 to get even numbers
        {
            if (checkEvenOrOdd(counter) == even)
            {
            sum += counter; // sum = sum + counter.  
            }
        };
        return sum;
    }
int sumEvenNumbersUsigWhileLoop(int n) // using if i dont know range of loop
{
    int sum = 0;
    int counter = 0;
    while(counter <= n)
    {
        if (checkEvenOrOdd(counter) == even)
        {
            sum += counter;
        }
        counter++;
    }
    return sum;
}
int sumEvenNumbersUsingDoWhileLoop(int n) // using if i want to execute loop at least once
{
    int sum = 0;
    int counter = 0;
  do {
    if (checkEvenOrOdd(counter) == even)
    {
        sum += counter;
    }
    counter++;
  } while (counter <= n);
  return sum;
}       
int sumEvenNumbersUsingDoWhileLoop(int n) // using if i want to execute loop at least once
{
    int sum = 0;
    int counter = 0;
  do {
    if (checkEvenOrOdd(counter) == even)
    {
        sum += counter;
    }
    counter++;
  } while (counter <= n);
  return sum;
}       


int main()
{
    int n;
    readNumber(n);
    cout << "Using For Loop, Sum of even numbers from 1 to " << n << " is: " << sumEvenNumbersUsingForLoop(n) << endl;
    cout << "Using While Loop, Sum of even numbers from 1 to " << n << " is: " << sumEvenNumbersUsigWhileLoop(n) << endl;
    cout << "Using Do-While Loop, Sum of even numbers from 1 to " << n << " is: " << sumEvenNumbersUsingDoWhileLoop(n) << endl;

    return 0;
}

