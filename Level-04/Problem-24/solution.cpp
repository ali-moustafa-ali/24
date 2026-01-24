#include <iostream>
#include <string>
#include <cmath>

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
void printResult(int age, int from, int to)
{
    if(validateAge(age, from, to))
        cout << "Age " << age << " is valid in range [" << from << ", " << to << "]." << endl;
    else
        cout << "Age " << age << " is not valid in range [" << from << ", " << to << "]." << endl;
}
int main()
{
    int age = readAge();
    printResult(age, 18, 100);
    return 0;
}