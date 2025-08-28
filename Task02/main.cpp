#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	int counter = count_number_of_digits_that_lower_than_number_sum(number);
	cout << "Amount of numbers that lower than digit sum: " << counter;

	return 0;
}