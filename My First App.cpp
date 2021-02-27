#include <iostream>
using namespace std;
int main() {
	int segons;
	int minuts;
	int hores;

	cin >> hores >> minuts >> segons;
	segons = segons + 1;
	if (segons == 60) {
		segons = 0;
		minuts = minuts + 1;
	}
	if (minuts == 60) {
		minuts = 0;
		hores = hores + 1;
	}
	if (hores == 24) {
		hores = 0;
	}

	if (hores < 10) {
		cout << "0" << hores << ":";
	}
	else cout << hores << ":";
	if (minuts < 10) {
		cout << "0" << minuts << ":";
	}
	else cout << minuts << ":";
	if (segons < 10) {
		cout << "0" << segons << endl;
	}
	else cout << segons << endl;
}	
