#ifndef EXTDATE_H
#define EXTDATE_H
#include "dateType.h"
#include <string>

using namespace std;

class extDateType: public dateType
{
  public:
  void setMonth(int);
  void setDay(int);
  void setYear(int);
  void addDay(int);
  void printLongDate();
  void printLongMonthYear();
  

  extDateType(); //constructor
  extDateType(int, int, int);

  private:
  string sMonth;
  static string months[13];
};

#endif