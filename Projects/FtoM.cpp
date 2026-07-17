#include <iostream>

using namespace std;

double f(double a); // call by value

int main() {
	double a = 3.28;
	cout << "In " << a << " foot " << f(a) << " meters";
}

double f(double a) {
	return a / 3.28;
}
