#include <iostream>
#include <string>
#include "Employer.h"


int main()
{
	system("chcp 1251");
	system("cls");
	string tasks;
	cout << "Введите задачи директора: ";
	getline(cin, tasks);
	Employer* a = new President(tasks);
	cout << "Введите задачи менеджера: ";
	getline(cin, tasks);
	Employer* b = new Manager(tasks);
	cout << "Введите задачи сотрудника: ";
	getline(cin, tasks);
	Employer* c = new Worker(tasks);
	a->print();
	b->print();
	c->print();
}
