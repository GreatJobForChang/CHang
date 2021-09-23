#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<int> findIndex(int arr[20], int size);
int main(){
	int arr[20];
	int number;
	int size = 0;
	cout << "Please input a number: ";
	while(cin >> number) {
		if(size > 20) {
			break;
		}

		arr[size++] = number;
		cout << "Please input a number: ";
	}
	cout << endl;
	vector<int> index = findIndex(arr, size);
	for(int num : index) {
		cout << num << ", ";
	}
	cout << endl;
	return 0;
}

vector<int> findIndex(int arr[20], int size) {
	vector<int> index;
	for(int i = 1; i < size - 1; i++) {
		if((arr[i] > arr[i-1] && arr[i] > arr[i+1])
		|| (arr[i] < arr[i-1] && arr[i] < arr[i+1])) {
			index.push_back(i+1);
		}
	}
	return index;
}
