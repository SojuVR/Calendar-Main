#ifndef CALENDAR_H
#define CALENDAR_H
#include "dayType.h"
#include "extDateType.h"

using namespace std;

class calendarType
{
  public:
  void setMonth(int);
  void setYear(int);
  int getMonth();
  int getYear();
  void printCalendar();
  calendarType(int, int);
  calendarType();

  private:
  dayType firstDay;
  extDateType firstDate;
  dayType firstDayOfMonth();
  void printTitle(); //month and year printed with row of days
  void printDays(); //days of the month specified printed
};

#endif