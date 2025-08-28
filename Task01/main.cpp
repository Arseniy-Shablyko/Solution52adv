#include <iostream>
#include <string>
using namespace std;

string Hanoi(int number_of_rings) {
	if (number_of_rings < 1) {
		return "Error";
	}

	int A = number_of_rings;
	int B = 0, C = 0;
	cout << "B = " << B << "\nC = " << C << "\nA = " << A << endl;

	while (true) {
		char s,t;
		cout << "Input stick to take ring: ";
		cin >> s;

		if (s == 'A') {
			A -= 1;
		}
		else if ((s == 'B') && (B != 0)) {
			B -= 1;
		}
		else if ((s == 'C') && (C != 0)) {
			C -= 1;
		}

		cout << "Input stick to put ring: ";
		cin >> t;

		if ((t == 'A') && (B != 0) && (C != 0)) {
			A += 1;
		}
		else if ((t == 'B') && (A < number_of_rings)) {
			B += 1;
		}
		else if ((t == 'C') && (A < number_of_rings)) {
			C += 1;
		}

		cout << s << " --> " << t << endl;

		cout << "B = " << B << "\nC = " << C << "\nA = " << A << endl;

		if ((C == number_of_rings) || (B == number_of_rings)) {
			break;
		}
	}

	return "complete";
}

int main() {
	int number_of_rings = 0;
	cout << "Input number of rings: ";
	cin >> number_of_rings;

	cout << Hanoi(number_of_rings);

	return 0;
}