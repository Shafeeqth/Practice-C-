#include<iostream>
using namespace std;

int main() {
	int a; 
	
	//implecit type casting ..
	
	char letter = 'A';

	int number = 23;

	cout << letter + number <<endl;

	letter += number;

	cout << letter;

	/*

	*/

	// explicit type casting .


	int x = 20;
	int y = 30;

	cout << "sum is : " << (float)( x / y) <<endl;

	cout << "charector is :" << (char) 65 <<endl;


	return 0;
}
