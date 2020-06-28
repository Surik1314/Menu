// меню11.cpp: определяет точку входа для консольного приложения.
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
	//1.Вывести на экран "ПРИВЕТ"
	//2.Сколько будет 2+2 ?
	//3.Хочешь узнать как меня зовут ?

	int m = 0;


	cin >> m;

	for (;;)
	{

		cout << "1.Вывести на экран 'ПРИВЕТ" << endl;
		cout << "2.Сколько будет 2 + 2 ?" << endl;
		cout << "3.Хочешь узнать как меня зовут ?" << endl;

		switch (m) {
		case 1:
			cout << "ПРИВЕТ" << endl;
			_getch();
			return 0;
			break;
		case 2:
			cout << "2+2=4" << endl;
			_getch();
			return 0;
			break;
		case 3:
			cout << "Меня зовут Мухаммад!" << endl;
			_getch();
			return 0;
			break;

		default:
			cout << "Вы ввели неверный пункт" << endl;
			_getch();
		}


	}
}
