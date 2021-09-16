#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main() {
	string account;
	string password;
	while(true) {
		cout << "Please input the account: ";
        	cin >> account;
       	 	cout << "Please input the password: ";
       		cin >> password;
		if(account.compare("21_CSE_c++_Fall")==0 && 
		 password.compare("278A&B")==0 ){
			cout << "login success" << endl;
			break;
		}
		cout << "login failed" << endl;
	}
	return 0;
}
