#include "Contributor.h"

Contributor::Contributor()
{
    surname = "No name";
    date = Date();
    money = 0;
    percent = 0;
}

Contributor::Contributor(string surname, Date date, float money, float percent)
{
    this->surname = surname;
    this->date = date;
    this->money = money;
    this->percent = percent;
}

Contributor::~Contributor()
{
    cout << "~Contributor" << endl;
}

float Contributor::getPercent() const
{
    return percent;
}

void Contributor::setPercent(float percent)
{
    this->percent = percent;
}

void Contributor::show() const
{
    cout << "SurName: " << surname << endl;
    cout << "Date: " << date << endl;
    cout << "Money: " << money << endl;
    cout << "Percent: " << percent << endl;
}

void Contributor::save(ofstream& file) const
{
    file << type() << endl;
    file << surname << endl;
    file << date.getDay() <<" " << date.getMonth() << " " << date.getYear() << endl;
    file << money << endl;
    file << percent << endl;
}

void Contributor::load(ifstream& file) 
{
    int d, m, y;
    getline(file, surname);
    file >> d >> m >> y;
    date.setYear(y);
    date.setMonth(m);
    date.setDay(d);
    file >> money;
    file >> percent;
}

string Contributor::type() const
{
    return "Contributor";
}
