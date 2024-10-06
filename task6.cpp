#include <iostream>
using namespace std;
void result(int number);

main()
{
int number;
cout << "Enter your number: ";
cin >> number;
result(number);
}

void result(int number)
{
if (number >50) {
   cout << "You are pass";
  }
if (number <=50) {
   cout << "You are fail";
  }
}