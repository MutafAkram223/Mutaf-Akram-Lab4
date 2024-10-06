#include <iostream>
using namespace std;
void car(float distance);
main ()
{
float distance; 
cout << "Enter the amount of distance:";
cin >> distance;
car (distance);
}
void car(float distance)
{ 
int fuel; 
if (distance>=10) {
cout << "Your fuel is" << distance * 10;
}
else {
cout << "Fuel is less than 100";}
}