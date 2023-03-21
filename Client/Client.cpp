#include "Client.h"

Client::Client()
{
	surname = "No name";
	date = Date();
	money = 0;
}

Client::Client(string surname, Date date, float money)
{
	this->surname = surname;
	this->date = date;
	this->money = money;
}

Client::~Client()
{
	cout << "~Client" << endl;
}

string Client::getSurName() const
{
	return surname;
}

Date Client::getDate() const
{
	return date;
}

float Client::getMoney() const
{
	return money;
}

void Client::setSurname(string surname)
{
	this->surname = surname;
}

void Client::setDate(Date date)
{
	this->date = date;
}

void Client::setMoney(float money)
{
	this->money = money;
}
