#include<iostream>

using namespace std;

double rainfall[12];

double total(double rainfall[12]) {
	double sum = 0;
	for (int i = 0; i < 12; i++) {
		sum += rainfall[i];
	}
	return sum;
}

double average(double rainfall[12]) {
	return total(rainfall) / 12;
}

void low(double rainfall[12]) {
	double low = rainfall[0];
	int number=1;
	for (int i = 0; i < 12; i++) {
		if (low > rainfall[i]) {
			low = rainfall[i];
			number = i+1;
		}
	}

	cout << "\nThe lowest rainfall was " << low << " in month " << number << ".";
}

void high(double rainfall[12]) {
	double high = rainfall[0];
	int number=1;
	for (int i = 0; i < 12; i++) {
		if (high < rainfall[i]) {
			high = rainfall[i];
			number = i+1;
		}
	}
	cout << "\nThe highest rainfall was " << high << " in month " << number << ".";
}

int main() {
	for (int i = 0; i < 12; i++) {
		cout << "Enter the rainfall for month " << i + 1 << ": ";
		cin >> rainfall[i];
		while (rainfall[i] < 0) {
			cout << "Error, enter a positive number: ";
			cin >> rainfall[i];
		}
	}

	cout << "\nTotal rainfall for the year: " << total(rainfall);
	cout << "\nAverage monthly rainfall: " << average(rainfall);
	low(rainfall);
	high(rainfall);
}
