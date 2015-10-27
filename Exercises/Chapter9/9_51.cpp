#include <iostream>
#include <string>
using namespace std;

#define NUMBER_MON 0
#define LETTER_MON 1

class Date{
private:
	unsigned year;
	unsigned month;
	unsigned day;

	unsigned GetMonByLetter(const string &mon);
public:
	Date(const string &date);
	void Parse(const string &date, int mode);
	void Display();
};

Date::Date(const string &date)
{
	if (date.find_first_of(' ') == string::npos)
		Parse(date, NUMBER_MON);
	else
		Parse(date, LETTER_MON);
}

void Date::Parse(const string &date, int mode)
{
	switch(mode)
	{
		case NUMBER_MON:
			month = stoi(date.substr(0, date.find_first_of('/')));
			day = stoi(date.substr(date.find_first_of('/')+1, date.find_last_of('/')));
			year = stoi(date.substr(date.find_last_of('/')+1));
			break;
		case LETTER_MON:
			if ((month = GetMonByLetter(date.substr(0, 3))) == -1)
			{
				cout << "month is invalid" << endl;
				exit(1);
			}
			day = stoi(date.substr(date.find_first_of(' ')+1, date.find_first_of(',')));
			year = stoi(date.substr(date.find_last_of(' ')+1));
			break;
		default:
			break;
	}
}

unsigned Date::GetMonByLetter(const string &mon)
{
	if (mon.compare("Jan") == 0)
		return 1;
	if (mon.compare("Feb") == 0)
		return 2;
	if (mon.compare("Mar") == 0)
		return 3;
	if (mon.compare("Apr") == 0)
		return 4;
	if (mon.compare("May") == 0)
		return 5;
	if (mon.compare("Jun") == 0)
		return 6;
	if (mon.compare("Jul") == 0)
		return 7;
	if (mon.compare("Aug") == 0)
		return 8;
	if (mon.compare("Sep") == 0)
		return 9;
	if (mon.compare("Oct") == 0)
		return 10;
	if (mon.compare("Nov") == 0)
		return 11;
	if (mon.compare("Dec") == 0)
		return 12;
	else 
		return -1;
}

void Date::Display()
{
	cout << "day:" << day << " month:" << month << " year:" << year << endl;
}

int main(int argc, char **argv)
{
	Date date("1/1/1990");
	date.Display();

	Date date1("January 1, 1900");
	date1.Display();

	Date date2("Jan 1, 1900");
	date2.Display();

	return 0;
}
