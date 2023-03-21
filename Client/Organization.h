#pragma once
#include "Client.h"
class Organization:public Client
{
protected:
	int number;
public:
	Organization();
	Organization(string surname, Date date, float money, float number);
	~Organization();

	float getNumber()const;

	void setNumber(int number);

	void show()const override;
	void save(ofstream& file)const override;
	void load(ifstream& file) override;
	string type()const override;
};

