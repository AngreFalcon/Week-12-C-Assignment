#include <iostream>
#include <iomanip>
#include "commonutils.hpp"

float average(int i1, int i2, int i3) {
	return static_cast<float>(i1 + i2 + i3) / 3.0f;
}

int main() {
	int n1 = 0, n2 = 0, n3 = 0;
	std::cout << "This program calculates the average of three numbers.\n";
	n1 = getNum<int>("First number: ");
	n2 = getNum<int>("Second number: ");
	n3 = getNum<int>("Third number: ");

	float a = average(n1, n2, n3);

	std::cout << std::setprecision(1) << std::fixed << "The average is " << a << std::endl;

	return 0;
}