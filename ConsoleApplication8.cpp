// ConsoleApplication8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <clocale>
using namespace std;

int prompt_menu_item()

int menu();
int main()
{
	
	
	int answer = menu();

	setlocale(LC_CTYPE, "RUS");
	int main(int argc, char* argv[])
		int variant = prompt_menu_item();
	switch (answer)
		switch(wariant)
	{
	case 0: cout << "����" << endl; break;
	case 1: cout << "��������" << endl; break;
	case 2: cout << "4!" << endl; break;
	case 3: cout << "�� ������ ��� ������ ����� ?" << endl; 
	case 4:	cout << "1.��" "2.���"; break;
	
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
		if (key == 0) cout << "-> ������" << endl;
		else  cout << "   ������" << endl;

		if (key == 1) cout << "-> ������ ������ ��� ���� ����� ?" << endl;
		else  cout << "   ������ ������ ��� ���� �����" << endl;

		if (key == 2) cout << "-> ������� ����� 2+2 ?" << endl;
		else  cout << "   ������� ����� 2+2 ?" << endl;

		if (key == 3) cout << "-> �����" << endl;
		else  cout << "   �����" << endl;
		
		

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