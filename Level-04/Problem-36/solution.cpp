#include <cmath>
#include <iostream>
#include <string>

using namespace std;
enum enOperationType {
  Add = '+',
  Subtract = '-',
  Multiply = '*',
  Divide = '/'
};

float readNumber(string message) {
  float number;
  cout << message;
  cin >> number;
  return number;
}

enOperationType readOperationType() {
  char op = '+';
  cout << "Enter operation type (+, -, *, /): ";
  cin >> op;
  return (enOperationType)op;
}
float calculate(float number1, float number2, enOperationType operationType) {
  switch (operationType) {
  case Add:
    return number1 + number2;
  case Subtract:
    return number1 - number2;
  case Multiply:
    return number1 * number2;
  case Divide:
    return number1 / number2;
  }
}
int main() {

  float number1 = readNumber("Enter the first number: ");
  float number2 = readNumber("Enter the second number: ");
  enOperationType operationType = readOperationType();
  float result = calculate(number1, number2, operationType);
  cout << "The result is: " << result << endl;

  return 0;
}