#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// Declaring Variables

	int a;
	float b;
	char c;
	bool d;
	double e;

	a = 100;
	b = 5.552;

	c = 'k';
	d = false;
	e = 54.3334323341;

	cout << "a " << a <<endl;
	cout << "b " << b <<endl;
	cout << "c " << c <<endl;
	cout << "e " << fixed << setprecision(7) << e <<endl;
	cout << "d " << d <<endl;



	return 0;
}