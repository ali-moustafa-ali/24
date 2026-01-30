#include <iostream>
#include <string>
#include <cmath>
// read age until age between from and to
using namespace std;
int readAge()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}
bool validateAge(int age, int from, int to)
{
    return (age >= from && age <= to);
}
int readUntilAgeBetween(int from, int to)
{
    int age;
    do
    {
        age = readAge();
        if (!validateAge(age, from, to))
            cout << "Invalid age. Please try again." << endl;
    } while (!validateAge(age, from, to));
    return age;
}
void printResult(int age)
{

    cout << "Valid age: " << age << endl;   
}
int main()
{
    int age;
    printResult(readUntilAgeBetween(18, 100));
    return 0;
}