/*This program will act as a calendar for a user to find specific days. At the moment, this will focus on dayType, meaning the days of the week. The program will show the constructors as default and with parameters, the net and previous day of the default constructor, and added days to a parameter constructor.*/
#include<iostream>
#include<string>
#include"extDateType.h"

using namespace std;

int main()
{
  int cMonth;
  int cDay;
  int cYear;
  int daysInMonth;
  extDateType date;
  cout << "Default constructor: ";
  date = extDateType();
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Constructor: ";
  date.setExtDate(2, 20, 2003);
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Number of days passed: ";
  cout << date.daysPassed() << endl;
  
  cout << "Number of days left: ";
  cout << date.daysLeft() << endl;
  
  cout << "Number of days in month: ";
  daysInMonth = date.lastDayOfMonth(cMonth);
  cout << daysInMonth << endl;
  
  cout << "After 15 days, date will be: ";
  date.addDay(15);
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Resetting year to 2000: ";
  date.setYear(2000);
  cout << date.getYear() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Resetting month to 2: ";
  date.setMonth(2);
  cout << date.getMonth() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Resetting day to 29: ";
  date.setDay(29);
  cout << date.getDay() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Date is now set to: ";
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Resetting year to 2001: ";
  date.setYear(2001);
  cout << date.getYear() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  
  cout << "Date is now set to: ";
  date.printLongDate();
  date.printLongMonthYear();
  
  cout << "Resetting month to 0: ";
  date.setMonth(0);
  cout << date.getMonth() << endl;
  date.printLongDate();
  date.printLongMonthYear();
  return 0;
}