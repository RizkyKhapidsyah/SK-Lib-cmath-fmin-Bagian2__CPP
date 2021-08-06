
#include <cmath>
#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double val;

	val = fmin(10.0, 1.0);
	cout << fixed << setprecision(4) << "fmin(10.0, 1.0) = " << val << "\n";

	val = fmin(-10.0, 1.0);
	cout << fixed << setprecision(4) << "fmin(-10.0, 1.0) = " << val << "\n";

	val = fmin(-10.0, -1.0);
	cout << fixed << setprecision(4) << "fmin(-10.0, -1.0) = " << val << "\n";

	_getch();
	return 0;
}
