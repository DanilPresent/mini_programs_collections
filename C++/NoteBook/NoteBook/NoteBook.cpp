
#include "pch.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	string pas = "8093";
	string pasUser = "0";
	cout << "Welcome to programm NoteBook!" << endl;
	cout << "Programme created by DanilPresent" << endl << "" << endl;
	while (pas != pasUser) {
		cout << "Input password: ";
		getline(cin, pasUser);
		if (pas == pasUser) {
			cout << "You logined!";
		}
		else {
			cout << "You failed input password!" << endl;
		}
	}
}