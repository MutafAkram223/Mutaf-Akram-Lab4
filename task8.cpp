#include <iostream>
using namespace std;
void buy (float price, string day);
main ()
{
string day; float price;
cout << "Enter the amount of purchase money (in $):";
cin >> price;
cout << "Enter the purchase day:";
cin >> day;
buy (price, day);
}
void buy (float price, string day)
{
if (day=="Sunday") {cout << price * 0.9;}
else {cout << price *1;}

}