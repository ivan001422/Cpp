#include <iostream>

using namespace std;

double average(const int *arr, unsigned int size);

int main() {
	unsigned int n;
	cout << "Enter arr size: ";
	cin >> n;
	if (n) {
		int *arr = new int[n];
		cout << "Enter arr values:\n";
		for (int i = 0; i != n; ++i) {
			cin >> arr[i];
		}

		cout << "Average: " << average(arr, n);
		delete[] arr;
	}
	
	else {
		cout << "Size can't be 0";
	}

	return 0;
}

double average(const int *arr, unsigned int size) {
	double temp = 0;
	for (int i = 0; i != size; ++i) {
		temp += *(arr + i); // Передача через const не позволит изменить значение
	}
	return temp / size;
}
