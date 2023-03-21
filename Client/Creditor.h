#pragma once
#include "Client.h"
class Creditor:public Client
{
protected:
	float percent;
	float remainder;
public:
	Creditor();
	Creditor(string surname, Date date, float money, float percent, float remainder);
	~Creditor();

	float getPercent()const;
	float getRemainder()const;

	void setPercent(float percent);
	void setRemainder(float remainder);

	void show()const override;
	void save(ofstream& file)const override;
	void load(ifstream& file) override;
	string type()const override;
};

