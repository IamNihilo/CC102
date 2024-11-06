#include <iostream>

using namespace std;

int main ()
{

	string name;
	cout << "Enter Name: ";
	//cin >> name;
	getline (cin, name);
	cout << name;

	return 0;
}