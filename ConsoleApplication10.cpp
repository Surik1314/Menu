// ConsoleApplication10.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int menu();
int main()

{
	
	setlocale(LC_ALL,"RUS");


	int answer = menu();
	switch (answer)
	{
	case 0: cout << "ÏÎÊÀ" << endl; break;
	case 1: cout << "ÌÓÕÀÌÌÀÄ" << endl; break;
	case 2: cout << "4!" << endl; break;
	case 3: cout << "ÒÛ ÓÂÅÐÅÍ ×ÒÎ ÕÎ×ÅØÜ ÂÛÉÒÈ ?" << endl;
	case 4:	cout << "0.äà" "1.íåò" << endl;

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
		if (key == 0) cout << "-> ÏÐÈÂÅÒ" << endl;
		else  cout << "   ÏÐÈÂÅÒ" << endl;

		if (key == 1) cout << "-> ÕÎ×ÅØÜ ÓÇÍÀÒÜ ÊÀÊ ÌÅÍß ÇÎÂÓÒ ?" << endl;
		else  cout << "   ÕÎ×ÅØÜ ÓÇÍÀÒÜ ÊÀÊ ÌÅÍß ÇÎÂÓÒ" << endl;

		if (key == 2) cout << "-> ÑÊÎËÜÊÎ ÁÓÄÅÒ 2+2 ?" << endl;
		else  cout << "   ÑÊÎËÜÊÎ ÁÓÄÅÒ 2+2 ?" << endl;

		if (key == 3) cout << "-> ÂÛÕÎÄ" << endl;
		else  cout << "   ÂÛÕÎÄ" << endl;



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
