#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include "chat_menu.h"
#include "chat_one.h"
#include "chat_all.h"
#include "enter_chat.h"
#include "registry_chat.h"
using namespace std;

// Итоговое задание Блок 1

int main()
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	system("chcp 1251"); // настраиваем кодировку консоли

	string user_name="Alex";
	char x = ' ';
	//int b;
	int x2 = 0;
	//int sum = 0;
	//StringArray array(10);// array messages

	cout << " " << endl;
	cout << "Summary Homework Topic 1" << endl;
	//cout << "Итоговое задание Блок 1" << endl;
	cout << " " << endl;
	cout << "This is chat." << endl;
	cout << " " << endl;

	do
	{
		cout << "------------------------------------------- " << endl;
		cout << "Registry : Input 1 ) Регистрация , введите 1" << endl;
		cout << "Enter    : Input 2 ) Вход в chat , введите 2" << endl;
		cout << "Chat     : Input 3 ) Просто chat , введите 3" << endl;
		cout << endl;
		cout << "Exit     : Input 7 ) Выход из программы    7" << endl;
		cout << "------------------------------------------- " << endl;


		//cout << "Введите " << endl;
		cin >> x;
		if (x == '1')
		{
			x2 = 1;
		}
		if (x == '2')
		{
			x2 = 2;
		}

		if (x == '3')
		{
			x2 = 3;
		}
		if (x == '7')
		{
			x2 = 7;
		}


		if (x2 != 7)
		{
			//cout << "Results:" << endl; 
				 // Результаты 
			//cout << "Результаты :" << endl;
		}

		switch (x2)
		case 1:
		{
			{
				//Регистрация;
				registry_chat();
				cout << "registry_chat" << endl;
				cout << " " << endl;
				break;
			}

		case 2:
		{
			//Вход в chat
			enter_chat();
			cout << "enter_chat" << endl;
			cout << " " << endl;
			break;
		}
		case 3:
		{
			//Просто вход в chat
			cout << "just_chat" << endl;
			cout << " " << endl;
			chat_menu();
			//just_chat;
			break;
		}

		case 7:
		{

		}
		}

	} while (x != '7');
	cout << " " << endl;
	cout << " Have a nice day. See you! " << endl;

	return 0;

}
