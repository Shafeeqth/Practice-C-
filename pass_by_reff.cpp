#include <iostream>

using namespace std;

// example for pass by value by pointer

void incMoney(int *incMon) {

	cout << incMon <<endl;

	(*incMon )= 2 * (*incMon);

	cout << (*incMon) << "inside function " << endl;

}

void MoneyInc( int &money) {
	money *= money;
	cout << "inside moneyInc" << money << endl;
}

int main() {

	int money = 500;

	incMoney(&money);

	cout << (money) << "inside main" << endl;
	MoneyInc(money);
	cout << "main  moneyInc" << money << endl;

 
	


	return 0;
}