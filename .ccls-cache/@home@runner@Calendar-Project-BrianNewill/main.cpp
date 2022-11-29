/*This program will act as a calendar for a user to find specific days. At the moment, this will focus on dateType, meaning the date by month, day, and year. The program will show the constructors as default and with parameters, the days passed and remaining, the days in a month, adjusted dates by paramters, and individual resetting of month, day, and year.*/
#include<iostream>
#include<string>
#include"dateType.h"

using namespace std;

int main()
{
  int month;
  int day;
  int year;
  int cMonth;
  int cDay;
  int cYear;
  int daysInMonth; //days in current month
  dateType date;

  cout << "Enter year: ";
  cin >> year;
  cout << "\nEnter month: ";
  cin >> month;
  cout << "\nEnter day: ";
  cin >> day;
  try
    {
      date = dateType(month, day, year);
    }
  catch (dateType::invalidYear date)
    {
      cout << date.what() << endl;
    }
  catch (dateType::invalidMonth date)
    {
      cout << date.what() << endl;
    }
  catch (dateType::invalidDay date)
    {
      cout << date.what() << endl;
    }
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  }
  
  