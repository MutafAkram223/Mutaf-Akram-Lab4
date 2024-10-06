#include <iostream>
using namespace std;
void votingage(int age);

main()
{
int age;
cout << "Enter the age of voter: ";
cin >> age;
votingage(age);
}

void votingage(int age)
{
if (age >= 18) {
   cout << "You are eligible for voting";
  }
if (age < 18) {
   cout << "You are not eligible for voting";
  }
}