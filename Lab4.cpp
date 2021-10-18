#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>
#include<unordered_map>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc == 0) {
		cout << "No valid argument" << endl;
		return 0;
	}
	if(argc == 1) {
		string argv0 = argv[0];
		if(argv0.compare("./Lab4") == 0) {
			cout << "No valid arguments" << endl;
			return 0;
		}
	}
	if(argc == 2) {
		string argv1 = argv[1];
		if(argv1.compare("Q1") == 0) {
			cout << "This is the code for the first question" 
				<< endl;
			return 0;
		} else if(argv1.compare("Q2") == 0) {
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
			cout << average;
			return 0;
		} else if(argv1.compare("Q3") == 0) {
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
				cout << GradeMap[key];
			} else {
				cout << "Not exists";
			}

		}
	}

	return 0;
}
