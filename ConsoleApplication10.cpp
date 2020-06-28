// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int menu();
int main()

{
	

	int answer = menu();
	switch (answer)
	{
	case 0: cout << "Bye" << endl; break;
	case 1: cout << "Muhammad" << endl; break;
	case 2: cout << "4!" << endl; break;
	case 3: cout << "ARE YOU SURE YOU WANT TO GET OUT ?" << endl;
	case 4:	cout << "0.yes" "1.no" << endl;

	}
	system("pause");
	return 0;
}

int menu()
{
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> HELLO" << endl;
		else  cout << "   HELLO" << endl;

		if (key == 1) cout << "-> Do you want to know my name ? ?" << endl;
		else  cout << "   Do you want to know my name ?" << endl;

		if (key == 2) cout << "-> How much is 2+2  ?" << endl;
		else  cout << "   How much is 2+2 ?" << endl;

		if (key == 3) cout << "-> Exit" << endl;
		else  cout << "   Exit" << endl;



		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}