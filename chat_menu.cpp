#include <iostream>
#include<locale.h> 
#include <cstdlib>
#include <string>;

#include "chat_menu.h"
using namespace std;

int x3;
string message1;

//setlocale(LC_ALL, "Russian"); // задаём русский текст
//system("chcp 1251"); // настраиваем кодировку консоли

void chat_menu()
{
	do
	{
		cout << "Just chat" << endl;
		cout << endl;
		cout << "------------------------------------------- " << endl;
		cout << "New messages 1, новые сообщения, введите 1" << endl;
		cout << "All messages 2, все сообщения  , введите 2" << endl;
		cout << "Send to one  3, написать одному, введите 3" << endl;
		cout << "Send to all  4, написать всем  , введите 4" << endl;
		cout << endl;
		cout << "Exit : Input 7, Выход из программы    7" << endl;
		cout << "------------------------------------------- " << endl;

		//cout << "Введите " << endl;
		cin >> x3;

		switch (x3)
		case 1:
		{
			{
				//New messages 1, новые сообщения
				// chat_read_new
				cout << "New messages 1, новые сообщения" << endl;
				break;
			}

		case 2:
		{
			//All messages 2, все сообщения
			// chat_read_all
			cout << "All messages 2, все сообщения" << endl;
			break;
		}
		case 3:
		{
			//Send to one  3, написать одному
			// chat_one
			cout << "Send to one  3, написать одному" << endl;
			//getline(cin, message1);
			break;
		}

		case 4:
		{
			//Send to all  4, написать всем
			// chat_all
			cout << "Send to all  4, написать всем" << endl;

			break;
		}

		case 7:
		{
			break;
		}
		}

	} while (x3 != '7');


	return ;
}



