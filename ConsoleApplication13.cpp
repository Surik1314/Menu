// ConsoleApplication11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <clocale>

using namespace std;

int main(){

	setlocale(LC_ALL, "RUS");


	char str2[500] ;

	cout << "������� ������: ";

	gets_s(str2);

	cout << "�� �����: " << str2;



	_getch();
	
	return 0;
}