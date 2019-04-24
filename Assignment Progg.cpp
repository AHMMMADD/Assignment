#include <iostream>
#include <conio.h>


using namespace std;
int main()
{
	int month;
	int day;
	int year;
	cout << "Enter Month:"; cin >> month;
	cout << "Enter Day:"; cin >> day;
	cout << "Enter Year:"; cin >> year;

	if (month == 1 && day <= 31)
		cout << "January" "\t"<< day <<"," "\t" << year <<"\t";
	else if (month == 1 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 2 && day <= 29)
		cout << "February" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 2 && day >= 30)
		cout << "Invalid Date" << endl;

	else if (month == 3 && day <= 31)
		cout << "March" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 3 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 4 && day <= 30)
		cout << "April" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 4 && day >= 31)
		cout << "Invalid Date" << endl;

	else if (month == 5 && day <= 31)
		cout << "May" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 5 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 6 && day <= 30)
		cout << "June" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 6 && day >= 31)
		cout << "Invalid Date" << endl;

	else if (month == 7 && day <= 31)
		cout << "July" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 7 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 8 && day <= 31)
		cout << "August" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 8 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 9 && day <= 30)
		cout << "September" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 9 && day >= 31)
		cout << "Invalid Date" << endl;

	else if (month == 10 && day <= 31)
		cout << "October" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 10 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month == 11 && day <= 30)
		cout << "November" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 11 && day >= 31)
		cout << "Invalid Date" << endl;

	else if (month == 12 && day <= 31)
		cout << "December" "\t" << day <<"," "\t"<< year << "\t";
	else if (month == 12 && day >= 32)
		cout << "Invalid Date" << endl;

	else if (month >=13 )
		cout << "Invalid Date!" << endl;
	
	_getch();
	return 0;
}
