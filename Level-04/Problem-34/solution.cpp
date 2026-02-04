#include <iostream>
#include <string>
#include <cmath>
using namespace std; 
// ask user enter total sales amount
// the commission is calculated as follows:
// sales amount 1 million: 1% commission
// sales amount between 1 million and 500k: 2% commission
//  sales amount between 500k and 100k: 3% commission
//  sales amount between 50k and 100k: 5% commission
// other wise: no commission
float readSalesAmount(float &salesAmount)
{
    cout << "Enter the total sales amount: ";
    cin >> salesAmount;
    return salesAmount;
}
float getCommissionRate(double salesAmount)
{
    if (salesAmount >= 1000000)
        return 0.01;
    else if (salesAmount >= 500000)
        return 0.02;
    else if (salesAmount >= 100000)
        return 0.03;
    else if (salesAmount >= 50000)
        return 0.05;
    else
        return 0;
}
float calculateCommission(float salesAmount)
{
   return salesAmount * getCommissionRate(salesAmount);
}

int main(){
    float salesAmount;
    readSalesAmount(salesAmount);
    cout << "commission rate: " << getCommissionRate(salesAmount) * 100 << "%" << endl;
    cout << "commission amount: $" << calculateCommission(salesAmount) << endl;
    return 0;
}

