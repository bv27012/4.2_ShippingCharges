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

	cout << "How much does your package weigh?" << endl;
	cin >> wInput;
	cout << endl;

	if (wInput >= 0 && wInput <= 2) {
		weightRate = 1.10;
		cout << "Cost Based On Weight: " << fixed << setprecision(2) << weightRate << endl;	
	}
	else if (wInput >= 3 && wInput <= 6) {
		weightRate = 2.20;
		cout << "Cost Based On Weight: " << fixed << setprecision(2) <<weightRate << endl;
	}
	else if (wInput >= 7 && wInput <= 10) {
		weightRate = 3.70;
		cout << "Cost Based On Weight: " << fixed << setprecision(2) << weightRate << endl;
	}
	else if (wInput >= 11 && wInput <= 20) {
		weightRate = 4.80;
		cout << "Cost Based On Weight: " << fixed << setprecision(2) << weightRate << endl;
	}
	else {
		cout << "Invalid weight." << endl;
	}
	
	cout << endl;

	cout << "How far is your package going?" << endl;
	cin >> dInput;
	cout << endl;

	if(dInput >= 10 && dInput <= 3000){
		distFactor = ceil(dInput / 500.0);
		cout << "Distance Factor (Will be multiplied with weight rate shown above): " << distFactor << endl;
	} else {
		cout << "Invalid distance. Please select a distance between 10 and 3000 miles (inclusive)." << endl;
	}


	return 0;
}
