
#include <iostream>

double bmi;

double getBmi(double height, double weight) {
	height /= 100;

	bmi = weight / height / height;

	return bmi;
}

