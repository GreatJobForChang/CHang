#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
double PI = 3.142;
int main() {
	double r;
	std::cout << "Please input the radius: ";
	std::cin >> r;
	double area = pow(r, 2) * PI;
	std::cout << "The area of the circle is: " << area 
		<< std::setprecision(2) << std::endl;
	return 0;
}
