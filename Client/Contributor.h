#pragma once
#include "Client.h"
class Contributor:public Client
{
protected:
	float percent;
public:
	Contributor();
	Contributor(string surname, Date date, float money, float percent);
	~Contributor();

	float getPercent()const;

	void setPercent(float percent);

	void show()const override;
	void save(ofstream& file)const override;
	void load(ifstream& file) override;
	string type()const override;
};

