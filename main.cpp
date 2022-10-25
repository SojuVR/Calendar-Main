/*This program will act as a calendar for a user to find specific days. At the moment, this will focus on dateType, meaning the date by month, day, and year. The program will show the constructors as default and with parameters, the days passed and remaining, the days in a month, adjusted dates by paramters, and individual resetting of month, day, and year.*/
#include<iostream>
#include<string>
#include"dateType.h"

using namespace std;

int main()
{
  //variables for finding current date after each change on each part
  int cMonth;
  int cDay;
  int cYear;
  int daysInMonth; //days in current month
  dateType date;
  cout << "Default constructor: ";
  date = dateType();
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  
  cout << "Constructor: ";
  date = dateType(2, 20, 2003);
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  
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
  date.print();
  
  cout << "Resetting year to 2000: ";
  date.setYear(2000);
  cout << date.getYear() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  
  cout << "Resetting month to 2: ";
  date.setMonth(2);
  cout << date.getMonth() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  
  cout << "Resetting day to 29: ";
  date.setDay(29);
  cout << date.getDay() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  date.print();
  
  cout << "Date is now set to: ";
  date.print();
  
  cout << "Resetting year to 2001: ";
  date.setYear(2001);
  cout << date.getYear() << endl;
  cMonth = date.getMonth();
  cDay = date.getDay();
  cYear = date.getYear();
  
  cout << "Date is now set to: ";
  date.print();
  
  cout << "Resetting month to 0: ";
  date.setMonth(0);
  cout << date.getMonth() << endl;
  date.print();
  return 0;
}