#ifndef EXTDATE_H
#define EXTDATE_H
#include "dateType.h"
#include <string>

using namespace std;

class extDateType: public dateType
{
  public:
  void printLongDate();
  void printLongMonthYear();
  

  extDateType(); //constructor
  extDateType(int, int, int);

  private:
  string sMonth;
  static string months[13];
};

#endif