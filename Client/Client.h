#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include "Date.h"
using namespace std;
class Client
{
protected:
	string surname;
	Date date;
	float money;
public:
	Client();
	Client(string surname, Date date, float money);
	~Client();

	string getSurName()const;
	Date getDate()const;
	float getMoney()const;

	void setSurname(string surname);
	void setDate(Date date);
	void setMoney(float money);

	virtual void show()const = 0;
	virtual void save(ofstream& file)const = 0;
	virtual void load(ifstream& file) = 0;
	virtual string type() const = 0;
};

