#include "logic.h"
int count_number_digits(int number) {
	int counter = 0;

	for (int i = number; i > 0; i /= 10) {
		counter++;
	}

	return counter;
}

int calculate_number_sum(int number, int number_of_digits) {
	int sum = 0;

	for (int i = 0; i < number_of_digits; i++) {
		sum += (number % 10);
		number /= 10;
	}

	return sum;
}

int count_number_of_digits_that_lower_than_number_sum(int number) {
	int counter = 0;

	int number_of_digits = count_number_digits(number);
	int sum = calculate_number_sum(number, number_of_digits);

	for (int i = 1; i < sum; i++) {
		for (int j = 1; j < sum; j++) {
			if (pow(i, j) == number) {
				counter++;
			}
		}
	}

	return counter;
}