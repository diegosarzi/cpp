#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Hello, World" << endl;
	cout << "Digite o primeiro numero de enter depois o proximo a somar : ";
	cin >> a >> b;
	cin.get();

	c = a + b;
	cout << "Total da soma: " << c << "." << endl;
	cin.get();
}
