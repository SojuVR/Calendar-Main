#ifndef DATETYPE_H
#define DATETYPE_H
#include <string>

using namespace std;

class dateType
{
  public:
  void setMonth(int);
  void setDay(int);
  void setYear(int);
  void addDay(int); //adds given amount of days
  int daysPassed(); //days since day 1 of year
  int daysLeft(); //find how many days left in year
  int lastDayOfMonth(int); //finds how many days is in current month
  bool leapYear(); //finds if it is a leap year
  int getMonth() {return month;}
  int getDay() {return day;}
  int getYear() {return year;}
  void print();

  dateType(); //constructor
  dateType(int, int, int); //constructor with parameters

  class invalidYear
  {
    public:
    invalidYear() {message = "Year must be 1900 or greater.";}
    string what() {return message;}

    private:
    string message;
  };

  class invalidMonth
  {
    public:
    invalidMonth() {message = "Month must be between 1 and 12.";}
    string what() {return message;}

    private:
    string message;
  };

  class invalidDay
  {
    public:
    invalidDay() {message = "Day must be between 1 and max day of month.";}
    string what() {return message;}

    private:
    string message;
  };

  private:
  int month;
  int day;
  int year;
};

#endif