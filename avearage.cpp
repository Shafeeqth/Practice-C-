#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// accepting 5 integers and find the avarage of the integer in 4 precision 

	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	int sum = a + b + c + d + e;

	cout <<  "average of the 5 values are :" << fixed << setprecision(5) << (float)((float) sum / 5) <<endl;

	return 0;

}