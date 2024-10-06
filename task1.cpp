#include <iostream>
using namespace std;
void fuel(int distance);
main ()
{
float distance, fuel;
cout << "Enter distance travelled:";
cin >> distance;
fuel (distance);
}
void fuel (int distance)
{
cout << "Fuel Required:" << distance * 10 << endl;

}