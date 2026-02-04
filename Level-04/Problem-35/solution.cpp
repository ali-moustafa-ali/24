# include <iostream>
# include <string>
# include <cmath>
using namespace std;

// read from user pennies, nickels, dimes, quarters, half-dollars, and dollars
// calculate the total amount in dollars and cents
// output the total amount in dollars and cents
// pennies = 1 cent
// nickels = 5 cents
// dimes = 10 cents
// quarters = 25 cents
// half-dollars = 50 cents
// dollars = 100 cents

struct stbigybanckContent {
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int halfDollars;
    int dollars;
};
void readCoins(stbigybanckContent &content)
{
    cout << "Enter the number of pennies: ";
    cin >> content.pennies;
    cout << "Enter the number of nickels: ";
    cin >> content.nickels;
    cout << "Enter the number of dimes: ";
    cin >> content.dimes;
    cout << "Enter the number of quarters: ";
    cin >> content.quarters;
    cout << "Enter the number of half-dollars: ";
    cin >> content.halfDollars;
    cout << "Enter the number of dollars: ";
    cin >> content.dollars;
}
float calculateTotalPennies(const stbigybanckContent &content)
{
    return content.pennies * 1 +
           content.nickels * 5 +
           content.dimes * 10 +
           content.quarters * 25 +
           content.halfDollars * 50 +
           content.dollars * 100;
}
void printTotalAmount(int totalAmount)
{
    cout << "Total amount: $" << (float)totalAmount / 100.0 << endl;
    cout << "Total amount in cents: " << totalAmount << " cents" << endl;
}
1
int main()
{
    stbigybanckContent content;
    readCoins(content);
    int totalAmount = calculateTotalPennies(content);
    printTotalAmount(totalAmount);
    return 0;

}