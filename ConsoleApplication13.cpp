// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <clocale>

using namespace std;

int main(){

	setlocale(LC_ALL, "RUS");


	char str2[500] ;

	cout << "введите строку: ";

	gets_s(str2);

	cout << "вы ввели: " << str2;



	_getch();
	
	return 0;
}