#include <iostream>
using namespace std;
void rep (string name);
main ()
{
string name;
cout << "Enter your name:";
cin >> name;
rep (name);
}

void rep (string name)
{
while(true) {cout << name;}
}