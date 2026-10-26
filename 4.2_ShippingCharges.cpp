// This program takes the weight of a package and the distance that it is travelling and calculates the total charge based on it.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int wInput;
	int dInput;
	int distFactor;
	double weightRate;
	double totalCost;

	cout << "How much does your package weigh?" << endl << endl;
	cin >> wInput;
	cout << wInput << endl;

	if (wInput >= 0 && wInput <= 2) {
		weightRate = 1.1;
		cout << "Cost Based On Weight: " << weightRate << endl;
	}
	else if (wInput >= 3 && wInput <= 6) {
		weightRate = 2.2;
		cout << "Cost Based On Weight: " << weightRate << endl;
	}
	else if (wInput >= 7 && wInput <= 10) {
		weightRate = 3.7;
		cout << "Cost Based On Weight: " << weightRate << endl;
	}
	else if (wInput >= 11 && wInput <= 20) {
		weightRate = 4.8;
		cout << "Cost Based On Weight: " << weightRate << endl;
	}
	else {
		cout << "Invalid weight." << endl;
	}

	return 0;
}
