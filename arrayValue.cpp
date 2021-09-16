#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main() {
	int size = 0;
	int arr[20];
	int input;
	cout << "Please input number: ";
	while(cin >> input){
		if(input >= 65535) {
			continue;
		}

		if(size >= 20) {
			break;
		}

		arr[size++] = input;
		cout << "Please input number: ";
	}
	cout << endl;
	int max = arr[0];
	int min = arr[0];
	for(int i = 1; i < size; i++) {
		max = fmax(max, arr[i]);
		min = fmin(min, arr[i]);
	}


	cout << "The number of array is: " << size << endl;
	cout << "The max value is: " << max << endl;
	cout << "The min value is: " << min <<endl;

	return 0;
}

