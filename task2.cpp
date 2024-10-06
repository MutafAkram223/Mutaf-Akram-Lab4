#include <iostream>
using namespace std;
void inchestofeet(float inch);

int main()
{
float inch;
cout << "Enter value in inches: ";
cin >> inch;
inchestofeet(inch);
}

void inchestofeet(float inch)
{
float feet;
feet = inch / 12;
cout << inch << " inches is equal to: " << feet << " feet" << endl;
}