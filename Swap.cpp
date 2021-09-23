#include<iostream>
#include<stdio.h>

using namespace std;

void swapByRef(int &a, int &b);
void swapByPoint(int *a, int *b);

int main() {
	int a = 10;
	int b = 11;
	swapByPoint(&a, &b);
	cout << a << b << endl;
	return 0;
}

void swapByRef(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swapByPoint(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
