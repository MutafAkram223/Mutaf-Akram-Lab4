#include <iostream>
using namespace std;
void howmanysticker(float sides);

int main()
{
float sides;
cout << "Enter the total sides: ";
cin >> sides;
howmanysticker(sides);
}

void howmanysticker(float sides)
{
float stickers;
stickers = sides * sides * 6;
cout << "Total numbers of required stickers are " << stickers << endl;
}