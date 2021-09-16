#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string account;
	string password;
	string cAccount = "21_CSE_c++_Fall";
	string cPwd = "278A&B";
	while(true) {
		cout << "Please input the account: ";
		cin >> account;
		cout << "Please input the password: ";
		cin >> password;
		
		if(strcasecmp(account.c_str(), cAccount.c_str())==0 
			&& strcasecmp(password.c_str(), cPwd.c_str())==0) {
			cout << "login success" << endl;
			break;
		}

		cout << "login failed" << endl;
	}
	return 0;
}
