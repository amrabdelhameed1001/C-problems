#include<iostream>
using namespace std;

int main() {
	cout << "what is student 1 name:";
	string name1;
	cin >> name1;

	cout << "His id: ";
	int id1;
	cin >> id1;

	cout << "His math exam grade: ";
	double grade1;
	cin >> grade1;

	cout << "what is student 2 name:";
	string name2;
	cin >> name2;

	cout << "His id: ";
	int id2;
	cin >> id2;

	cout << "His math exam grade: ";
	double grade2;
	cin >> grade2;

	cout << "Students grades in math \n";
	cout << name1 << "(with id " << id1 << ") got grade: " << grade1 << endl;
	cout << name2 << "(with id " << id2 << ") got grade: " << grade2 << endl;

	double average{(grade1 + grade2) /2};
	cout << "Average grade is " << average;

	return 0;

}
