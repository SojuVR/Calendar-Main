/*This program will act as a calendar for a user to find specific days. At the moment, this will focus on dayType, meaning the days of the week. The program will show the constructors as default and with parameters, the net and previous day of the default constructor, and added days to a parameter constructor.*/
#include<iostream>
#include<string>
#include"dayType.h"

using namespace std;

int main()
{
  dayType day1;
  cout << "From default contructor: ";
  cout << day1.getDay() << endl;
  cout << "Next day: ";
  cout << day1.nextDay() << endl;
  cout << "Previous day: ";
  cout << day1.previousDay() << endl;

  dayType day2("Monday");
  cout << "\nFrom constructor with parameters: ";
  cout << day2.getDay() << endl;
  day2.addDay(3);
  cout << "After adding 3 days: ";
  cout << day2.getDay() << endl;
  day2.addDay(30);
  cout << "After adding 30 days: ";
  cout << day2.getDay() << endl;
  day2.addDay(365);
  cout << "After adding 365 days: ";
  cout << day2.getDay() << endl;
}