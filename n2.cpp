#include <iostream>
using namespace std;

struct aeroflot
{
	string FlyghtName;
	int FlyghtNum;
	string PlaneType;
}plane;

int main()
{
	struct aeroflot* pPlane;
	pPlane = &plane;

	cout << "enter flyght name:\n";
	cin >> pPlane->FlyghtName;
	cout << "enter flyght number:\n";
	cin >> pPlane->FlyghtNum;
	cout << "enter plane type:\n";
	cin >> pPlane->PlaneType;

	cout << "\nYour info about flyght:\nFlyght name: " << pPlane->FlyghtName
		<< "\nFlyght number: " << pPlane->FlyghtNum
		<< "\nPlane type: " << pPlane->PlaneType << "\n\n";

	return 0;
}