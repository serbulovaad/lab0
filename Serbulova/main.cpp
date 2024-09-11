#include <iostream>
using namespace std;

int main() 
{
	cout << "Hello world" << endl;
	cout << "Print 10: ";
	int x;
	cin >> x;

	if (x == 10)
		cout << "Good job" << endl;
	else
		cout << "Error!\nx = " << x << endl;

	return 0;

	if (1) // не запускается т.к return выше
		cout << "End" << endl;

}