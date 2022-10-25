#ifndef DATETYPE_H
#define DATETYPE_H

class dateType
{
  public:
  void setDate(int, int, int);
  void setMonth(int);
  void setDay(int);
  void setYear(int);
  void addDay(int);
  int daysPassed();
  int daysLeft();
  int lastDayOfMonth(int);
  bool leapYear();
  int getMonth() {return month;}
  int getDay() {return day;}
  int getYear() {return year;}
  void print();

  dateType();

  private:
  int month;
  int day;
  int year;
};

#endif