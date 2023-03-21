#include "Container.h"

Container::Container()
{
	Client* c = nullptr;
	ifstream file("client.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			string type;
			getline(file, type);
			if (type == "Contributor")
			{
				c = new Contributor();
				c->load(file);
				arr.push_back(c);
			}
			else if(type == "Creditor")
			{
				c = new Creditor;
				c->load(file);
				arr.push_back(c);
			}
			else if (type == "Organization")
			{
				c = new Organization;
				c->load(file);
				arr.push_back(c);
			}
		}
		file.close();
	}
}

Container::~Container()
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i]->~Client();
	}
}

void Container::showList()
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i]->show();
		cout << endl;
	}
}

void Container::addClient(Client* obj)
{
	arr.push_back(obj);
}

void Container::saveClient()
{
	ofstream file("client.txt");
	if (file.is_open())
	{
		for (Client* x : arr)
		{
			x->save(file);
		}
	}
}

void Container::sortClients()
{
}

void Container::sortByMoney()
{
	sort(arr.begin(), arr.end(), [](Client* a, Client* b) {return a->getMoney() < b->getMoney();});
}

void Container::sortByType()
{
	sort(arr.begin(), arr.end(), [](Client* a, Client* b) {return a->getMoney() < b->getMoney();});
}

void Container::sortBySurName()
{
	sort(arr.begin(), arr.end(), [](Client* a, Client* b) {return a->getSurName() < b->getSurName();});
}

void Container::sortByDate()
{
	sort(arr.begin(), arr.end(), [](Client* a, Client* b) {return a->getDate() < b->getDate();});
}
