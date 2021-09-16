#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main() {
	int input;
	int arr[20];
	int size = 0;
	cout << "Please input the number: ";
	while(cin >> input) {
		if(input >= 65535) {
			continue;
		}
		if(size >= 20) {
			break;
		}

		arr[size++] = input;
		cout << "Please input the number: ";
	}
	cout << endl;
	for(int i = 1; i < size; i++) {
		int tmp = arr[i];
		for(int j = i - 1; j >= 0; j--) {
			if(arr[j] > tmp) {
				arr[j+1] = arr[j];
			} else {
				arr[j+1] = tmp;
				break;
			}
		}
	}
	if(size == 0) {
		cout << "The median is: 0" << endl;
		return 0;
	}
	if(size % 2 == 0) {
		double median = (arr[size / 2] + arr[size / 2 - 1]) / 2;
		cout << "The median is: " << median << endl;
	} else {
		cout << "The median is: " << arr[size / 2] << endl;
	}

	return 0;
}
