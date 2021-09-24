#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>
#include<unordered_map>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc == 1 && argv[0] == "./Lab4") {
		cout << "No valid arguments" << endl;
		return 0;
	}
	if(argc == 2) {
		if(argv[1] == "Q1") {
			cout << "This is the code for the first question" 
				<< endl;
			return 0;
		} else if(argv[1] == "Q2") {
			ifstream input("input.txt");
			int size = 0;
			int num;
			int sum = 0;
			if(!input.good()) {
				cerr << "Unable to read input.txt\n";
				return 1;
			}
			while((input >> num)) {
				sum += num;
				size++;
			}
			int average = sum / size;
			cout << average << endl;
			return 0;
		} else if(argv[1] == "Q3") {
			ifstream grade("input.txt");
			ifstream name("NameFile.txt");
			if(!grade.good()) {
				cerr << "Unable to read input.txt\n";
				return 1;
			}

			if(!name.good()) {
				cerr << "Unable to read NameFile.txt\n";
				return 1;
			}

			using StrIntMap = unordered_map<string, int>;
			StrIntMap GradeMap;
			string student;
			int num;
			while(name >> student) {
				if(!(grade >> num)) {
					break;
				}
				GradeMap.insert(pair<string, int>
						{student, num});
			}
			string key;
			cin >> key;
			if(GradeMap.find(key) == GradeMap.end()) {
				cout << GradeMap[key] << endl;
			} else {
				cout << "Not exists" << endl;
			}

		}
	}

	return 0;
}
