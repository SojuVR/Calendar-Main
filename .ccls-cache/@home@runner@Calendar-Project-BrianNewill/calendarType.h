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
  void printCalendar(int, int);
  calendarType(int, int);
  calendarType();

  private:
  int days[6][7];
  dayType firstDay;
  extDateType firstDate;
  dayType firstDayOfMonth();
  void printTitle(); //month and year printed with row of days
  void printDays(int, int); //days of the month specified printed
};

#endif