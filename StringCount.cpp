#include<iostream>
#include<stdio.h>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

int letterCount(string str);
int digitCount(string str);
int numberCount(string str);
bool contains(string str, string key);
void changeCase(string str, bool toUpper);
vector<int> countWhole(string str);

int main() {
	string str = "feng17@miamiOh.edu_^&*-----2055";
	cout << letterCount(str) << endl;
	cout << digitCount(str) << endl;
	cout << numberCount(str) << endl;
	cout << contains(str, "miami") << endl;
	vector<int> number = countWhole(str);
	cout << number.at(0) << endl;
	cout << number.at(1) << endl;
	cout << number.at(2) << endl;
	return 0;
}

int letterCount(string str) {
	int count = 0;
	for(int i = 0; i < str.size(); i++) {
		if((str[i] <= 90 && str[i] >= 65)
		|| (str[i] <= 122 && str[i] >= 97)) {
			count++;
		}
	}
	return count;
}

int digitCount(string str) {
	int count = 0;
        for(int i = 0; i < str.size(); i++) {
                if(str[i] <= 57 && str[i] >= 48) {
                        count++;
                }
        }
        return count;
}

int numberCount(string str) {
	int count = 0;
        for(int i = 0; i < str.size(); i++) {
                if(str[i] <= 57 && str[i] >= 48) {
                        count++;
			for(int j = i+1; j < str.size(); j++) {
				if(str[j] > 57 || str[j] < 48) {
					break;
				} else {
					i++;
				}
			}
            	}
        }
        return count;
}

bool contains(string str, string key) {
	if(key.size() == 0) {
		return true;
	}
	for(int i = 0; i < str.size(); i++) {
		if(str.size() - 1 - i < key.size()) {
			return false;
		}
		if(str[i] == key[0]) {
			for(int j = 1; j < key.size(); j++) {
				if(str[i + j] != key[j]) {
					break;
				}

				if(j == key.size()-1 && str[i+j] == key[j]) {
					return true;
				}
			}
		}
	}
	return true;
}

void changeCase(string str, bool toUpper) {
	for(int i = 0; i < str.size(); i++) {
		if(toUpper) {
			if(str[i] <= 122 && str[i] >= 97) {
				str[i] = str[i] - 32;
			}
		} else {
			if(str[i] <= 90 && str[i] >= 65) {
				str[i] = str[i] + 32;
			}
		}
	}
}

vector<int> countWhole(string str) {
	vector<int> number;
	number.push_back(letterCount(str));
	number.push_back(digitCount(str));
	number.push_back(numberCount(str));
	return number;
}
