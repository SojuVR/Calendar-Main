#include <iostream>
#include <iomanip>
#include <cassert>
#include "calendarType.h"
#include "extDateType.h"

using namespace std;

calendarType::calendarType()
{
  
}

calendarType::calendarType(int m, int y):firstDate(m, 1, y)
{
  firstDay = firstDayOfMonth();
}

void calendarType::setMonth(int m)
{
  assert(m >= 1 && m <= 12);
  firstDate.setMonth(m);
  firstDay = firstDayOfMonth();
}

void calendarType::setYear(int y)
{
  assert(y >= 1900);
  firstDate.setYear(y);
}

dayType calendarType::firstDayOfMonth()
{
  dayType tempDay;
  int passedDays;

  tempDay.setDay("Monday");
  passedDays = firstDate.daysPassed();
  tempDay.addDay(passedDays);
  return tempDay;
}

void calendarType::printTitle()
{
  firstDate.printLongMonthYear();
}

void calendarType::printDays()
{
  
}

void calendarType::printCalendar()
{
  printTitle();
  printDays();
}
