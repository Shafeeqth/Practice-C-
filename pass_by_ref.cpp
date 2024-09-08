#include <iostream>

using namespace std;

int main() {

	int x = 14;
	int *xptr = &x;
	int **xxptr = &xptr;

	cout << x <<endl;
	cout << (*xptr) <<endl;
	cout << xxptr <<endl;

	// Reference Variable

	int &y = x;

	cout << y;
	cout << (&x) <<endl;
	cout << (&y) <<endl;


	return 0;
}