#include<iostream>
#include<stdio.h>

int main() {
	int w;
	int h;
	std::cout << "Please input the width: ";
	std::cin >> w;
	std::cout << "Please input the height: ";
	std::cin >> h;
	int perimeter = (w + h) * 2;
	int area = w * h;
	std::cout << "The perimeter is: " << perimeter << std::endl;
	std::cout << "The area is: " << area << std::endl;
	return 0;
}
