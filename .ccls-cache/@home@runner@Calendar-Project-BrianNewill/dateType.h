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
  void addDay(int);
  int daysPassed();
  int daysLeft();
  int lastDayOfMonth(int);
  bool leapYear(int y);
  int getMonth() {return month;}
  int getDay() {return day;}
  int getYear() {return year;}
  void print();

  dateType();
  dateType(int, int, int); 

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