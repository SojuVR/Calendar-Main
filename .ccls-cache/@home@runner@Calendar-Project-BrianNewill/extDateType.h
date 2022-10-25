#ifndef EXTDATE_H
#define EXTDATE_H
#include "dateType.h"
#include <string>

using namespace std;

class extDateType: public dateType
{
  public:
  void setExtDate(int, int, int);
  void printLongDate();
  void printLongMonthYear();
  

  extDateType(); //constructor

  private:
  string sMonth;
  static string months[13];
};

#endif