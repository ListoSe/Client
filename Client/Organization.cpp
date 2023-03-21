#include "Organization.h"

Organization::Organization()
{
    surname = "No name";
    date = Date();
    money = 0;
    number = 0;
}

Organization::Organization(string surname, Date date, float money, float number)
{
    this->surname = surname;
    this->date = date;
    this->money = money;
    this->number = number;
}

Organization::~Organization()
{
    cout << "~Organization" << endl;
}

float Organization::getNumber() const
{
    return number;
}

void Organization::setNumber(int number)
{
    this->number = number;
}

void Organization::show() const
{
    cout << "SurName: " << surname << endl;
    cout << "Date: " << date << endl;
    cout << "Money: " << money << endl;
    cout << "Number: " << number << endl;
}

void Organization::save(ofstream& file) const
{
    file << type() << endl;
    file << surname << endl;
    file << date.getDay() << " " << date.getMonth() << " " << date.getYear() << endl;
    file << money << endl;
    file << number << endl;
}

void Organization::load(ifstream& file)
{
    int d, m, y;
    getline(file, surname);
    file >> d >> m >> y;
    date.setYear(y);
    date.setMonth(m);
    date.setDay(d);
    file >> money;
    file >> number;
}

string Organization::type() const
{
    return "Organization";
}
