#include <iostream>
#include<locale.h> 
#include <cstdlib>
#include "chat.h"
using namespace std;
//setlocale(LC_ALL, "Russian"); // задаём русский текст
//system("chcp 1251"); // настраиваем кодировку консоли
int registry_chat(int x, int y)
{
	cout << "Registry" << endl;
	return 0;
}

int enter_chat(int x, int y)
{
	cout << "Enter chat" << endl;
	return 0;
}
int only_chat(int x, int y)
{
	cout << "Only chat" << endl;
	cout << endl;
	cout << "New messages 1, новые сообщения, введите 1" << endl;
	cout << "All messages 2, все сообщения  , введите 2" << endl;
	cout << "Send to one  3, написать одному, введите 3" << endl;
	cout << "Send to all  4, написать всем  , введите 4" << endl;
	cout << endl;
	cout << "Exit : Input 7, Выход из программы    7" << endl;




	return 0;
}




