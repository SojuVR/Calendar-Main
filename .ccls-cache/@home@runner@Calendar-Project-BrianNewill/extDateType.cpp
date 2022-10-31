#include <iostream>
#include "extDateType.h"

using namespace std;

string extDateType::months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

extDateType::extDateType():dateType()
{
  sMonth = months[1];
}

extDateType::extDateType(int m, int d, int y):dateType(m, d, y)
{
  sMonth = months[getMonth()];
}

void extDateType::setMonth(int m)
{
  dateType::setMonth(m);
  sMonth = months[getMonth()];
}

void extDateType::setDay(int d)
{
  dateType::setDay(d);
  sMonth = months[getMonth()];
}

void extDateType::setYear(int y)
{
  dateType::setYear(y);
  sMonth = months[getMonth()];
}

void extDateType::addDay(int d)
{
  dateType::addDay(d);
  sMonth = months[getMonth()];
}

void extDateType::printLongDate()
  {
    cout << sMonth << " " << getDay() << ", " << getYear() << endl;
  }

void extDateType::printLongMonthYear()
  {
    cout << sMonth << " " << getYear() << endl;
  }