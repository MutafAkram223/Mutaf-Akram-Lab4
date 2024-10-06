#include <iostream>
using namespace std;
void eventoodd(int number);

main()
{
int number;
cout << "Enter the value of number: ";
cin >> number;
eventoodd(number);
}

void eventoodd(int number)
{
if (number%2==0) {
   cout << "Given number is even";
  }
if (number%2==1) {
   cout << "Given number is odd";
  }
}