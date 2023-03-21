#include "Container.h"
#include "Date.h"
using namespace std;

int main()
{
	/*Contributor a("Contributor", Date(), 1000, 15);
	a.show();

	ofstream file("a.txt");
	a.save(file);
	file.close();*/
	Container con;
	int menu = 0;
	string surname;
		Date date;
		float money, percent, remainder;
		int number;
	do 
	{
		cout << "1 - show all list" << endl;
		cout << "2 - add Contributor" << endl;
		cout << "3 - add Creditor" << endl;
		cout << "4 - add Organization" << endl;
		cout << "5 - sort by surname" << endl;
		cout << "6 - sort by price" << endl;
		cout << "7 - sort by type" << endl;
		cout << "8 - sort by date" << endl;
		cout << "9 - save to file" << endl;

		cin >> menu;

		switch (menu)
		{
		case 1:
			con.showList();
			cout << endl;
			break;
		case 2:
			cout << "Input surname: " << endl;
			cin >> surname;
			cout << "Input date: " << endl;
			cin >> date;
			cout << "Input money: " << endl;
			cin >> money;
			cout << "Input percent: " << endl;
			cin >> percent;
			con.addClient(new Contributor(surname, date, money, percent));
			break;
		case 3:
			cout << "Input surname: " << endl;
			cin >> surname;
			cout << "Input date: " << endl;
			cin >> date;
			cout << "Input money: " << endl;
			cin >> money;
			cout << "Input percent: " << endl;
			cin >> percent;
			cout << "Input remainder: " << endl;
			cin >> remainder;
			con.addClient(new Creditor(surname, date, money, percent, remainder));
			break;
		case 4:
			cout << "Input surname: " << endl;
			cin >> surname;
			cout << "Input date: " << endl;
			cin >> date;
			cout << "Input money: " << endl;
			cin >> money;
			cout << "Input number: " << endl;
			cin >> number;
			con.addClient(new Organization(surname, date, money, number));
			break;
		case 5:
			con.sortBySurName();
			con.showList();
			break;
		case 6:
			con.sortByMoney();
			con.showList();
			break;
		case 7:
			con.sortByType();
			con.showList();
			break;
		case 8:
			con.sortByDate();
			con.showList();
			break;
		case 9:
			con.saveClient();
			break;
		default:
			break;
		}
	} while (menu != 0);
}