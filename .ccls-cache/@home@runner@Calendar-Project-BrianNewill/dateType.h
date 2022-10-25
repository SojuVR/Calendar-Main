#ifndef DATETYPE_H
#define DATETYPE_H

class dateType
{
  public:
  void setDate(int, int, int); //constructor with parameters
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

  private:
  int month;
  int day;
  int year;
};

#endif