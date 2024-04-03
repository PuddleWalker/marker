#pragma once
#include <stdlib.h>
#include <iostream>

using namespace std;

class Employer {
protected:
	string tasks;
public:
	virtual void print() = 0;
};
class President : public Employer {
public:
	virtual void print() override{
		cout << "������ President: " << tasks << endl;
	}
	President(string tasks) {
		President::tasks = tasks;
	}
};
class Manager : public Employer {
public:
	virtual void print() override {
		cout << "������ Manager: " << tasks << endl;
	}
	Manager(string tasks) {
		Manager::tasks = tasks;
	}
};
class Worker : public Employer {
public:
	virtual void print() override {
		cout << "������ Worker: " << tasks << endl;
	}
	Worker(string tasks) {
		Worker::tasks = tasks;
	}
};