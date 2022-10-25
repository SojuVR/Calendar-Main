#include <iostream>
#include "extDateType.h"

using namespace std;

string extDateType::months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

extDateType::extDateType():dateType()
{
  sMonth = months[1];
}

void extDateType::setExtDate(int m, int d, int y)
{
  dateType::setDate(m, d, y);
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