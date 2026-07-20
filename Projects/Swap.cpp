#include <iostream>

using namespace std;

void swapUsingPointer(int *a, int *b);
void swapUsingReferences(int &a, int &b);

int main() {
	int a = 10; int b = 20;

	cout << "swapUsingPointer(10, 20): ";
	swapUsingPointer(&a, &b);
	cout << "(" << a << ", " << b << ')' << '\n';

	cout << "swapUsingReferences(20, 10): ";
	swapUsingReferences(a, b);
	cout << "(" << a << ", " << b << ')';

	return 0;
}

void swapUsingPointer(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapUsingReferences(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
