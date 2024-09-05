#include <iostream>
#include <iomanip>

using namespace std;

int area(int a) {
		cout << "square" <<endl;
		return a * a;
	}

	float area(int a, float b) {
		cout << "int , float" <<endl;
		return a * b;

	}

	float area(float a , int b) {
		cout << "float, int" << endl;
		return  a * b;
	}

int main() {

	/*
	Bits wise operators 

	Bits on Int, Char

	Bitwise or | 	
	Bitwise and &
	Bitwise xor ^
	bitwise not or complement operator ~
	Bitwize right shift <<
	Bitwise left shift >>


	*/

	//or
	cout << (5 & 7) <<endl;
	cout << (5 | 7) <<endl;
	cout << (5 ^ 7) <<endl;
	cout << ~5 <<endl;
	cout << (5 << 5) <<endl;
	cout << (5 >> 5) <<endl;





	int area1 = area(5);
	int area2 = area(3, 2.2);
	int area3 = area(2.3, 9);

	cout << "area1 " << area1 <<endl;
	cout << "area2 " << area2 <<endl;
	cout << "area3 " << area3 <<endl;


	return 0;

	



}