#include "Creditor.h"

Creditor::Creditor()
{
    surname = "No name";
    date = Date();
    money = 0;
    percent = 0;
    remainder = 0;
}

Creditor::Creditor(string surname, Date date, float money, float percent, float remainder)
{
    this->surname = surname;
    this->date = date;
    this->money = money;
    this->percent = percent;
    this->remainder = remainder;
}

Creditor::~Creditor()
{
    cout << "~Creditor" << endl;
}

float Creditor::getPercent() const
{
    return percent;
}

float Creditor::getRemainder() const
{
    return remainder;
}

void Creditor::setPercent(float percent)
{
    this->percent = percent;
}

void Creditor::setRemainder(float remainder)
{
    this->remainder = remainder;
}

void Creditor::show() const
{
    cout << "SurName: " << surname << endl;
    cout << "Date: " << date << endl;
    cout << "Money: " << money << endl;
    cout << "Percent: " << percent << endl;
    cout << "Remainder: " << percent << endl;
}

void Creditor::save(ofstream& file) const
{
    file << type() << endl;
    file << surname << endl;
    file << date.getDay() << " " << date.getMonth() << " " << date.getYear() << endl;
    file << money << endl;
    file << percent << endl;
    file << remainder << endl;
}

void Creditor::load(ifstream& file)
{
    int d, m, y;
    getline(file, surname);
    file >> d >> m >> y;
    date.setYear(y);
    date.setMonth(m);
    date.setDay(d);
    file >> money;
    file >> percent;
    file >> remainder;
}

string Creditor::type() const
{
    return "Creditor";
}
