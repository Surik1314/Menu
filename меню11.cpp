// ����11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include "stdafx.h"
#include "iostream"
#include "conio.h"

using namespace std;



int main()
{
	int m = 0;



	setlocale(LC_ALL, "rus");
	//1.������� �� ����� "������"
	//2.������� ����� 2+2 ?
	//3.������ ������ ��� ���� ����� ?

	int m = 0;


	cin >> m;

	for (;;)
	{

		cout << "1.������� �� ����� '������" << endl;
		cout << "2.������� ����� 2 + 2 ?" << endl;
		cout << "3.������ ������ ��� ���� ����� ?" << endl;

		switch (m) {
		case 1:
			cout << "������" << endl;
			_getch();
			return 0;
			break;
		case 2:
			cout << "2+2=4" << endl;
			_getch();
			return 0;
			break;
		case 3:
			cout << "���� ����� ��������!" << endl;
			_getch();
			return 0;
			break;

		default:
			cout << "�� ����� �������� �����" << endl;
			_getch();
		}


	}
}
