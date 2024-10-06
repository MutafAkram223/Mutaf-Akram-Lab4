#include <iostream>
using namespace std;
void shopping (string day, int price);
main ()
{ 
while (true)
{string day; int price;
cout << "Enter the price of things you have bought:";
cin >> price;
cout << "Enter the day of shopping:";
cin >> day;
shopping (day,price);}
}
void shopping (string day, int price)
{
if (day=="Sunday") {cout << "Your shopping price is:" << price * 0.95  ;}
else {cout << "Your shopping price is" << price * 0.9  ;}
}
