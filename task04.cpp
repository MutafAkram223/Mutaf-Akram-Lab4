#include <iostream>
using namespace std;

void calculation(float num1, float num2, char op);

int main()
{
float num1, num2;
char op;
    
cout << "Enter value of first number: ";
cin >> num1;
cout << "Enter value of second number: ";
cin >> num2;
cout << "Enter operation (+, -, *, /): ";
cin >> op;
    
calculation(num1, num2, op);

}

void calculation(float num1, float num2, char op)
{
if (op == '+') {
    float add = num1 + num2;
    cout << "Addition: " << add;
    }
if (op == '-') {
    float sub = num1 - num2;
    cout << "Subtraction: " << sub;
    }
if (op == '*') {
    float mul = num1 * num2;
    cout << "Multiplication: " << mul;
    }
    if (op == '/') {
    float div = num1 / num2;
    cout << "Division: " << div;
        }
        
}