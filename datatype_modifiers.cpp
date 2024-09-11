#include <iostream>

using namespace std;

int main () {

	long int number = 12345343134;
	int number_int = number;

	cout << number <<endl;
	cout << number_int <<endl;

	cout << sizeof(number) <<endl;
	cout << sizeof(number_int) <<endl;

	cout << sizeof(short int) <<endl;
	cout << sizeof(long int) << endl;

	cout << sizeof(signed long int)  <<endl;
	cout << sizeof(unsigned long int) <<endl;


	return 0;
}