#pragma once
#include "Client.h"
#include "Contributor.h"
#include "Creditor.h"
#include "Organization.h"
#include <vector>
#include <algorithm>
class Container
{
protected:
	vector<Client*>arr;
public:
	Container();
	~Container();

	void showList();
	void addClient(Client* obj);
	void saveClient();
	void sortClients();

	void sortByMoney();
	void sortByType();
	void sortBySurName();
	void sortByDate();
};

