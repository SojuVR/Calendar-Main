#include <iostream>
#include "extDateType.h"

using namespace std;

string extDateType::months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
extDateType::extDateType(int m, int d, int y):dateType(m, d, y)
{
  sMonth = months[getMonth()];
}

void extDateType::printLongDate()
  {
    cout << sMonth << " " << day << ", " << year << endl;
  }

void extDateType::printLongMonthYear()
  {
    cout << sMonth << " " << year << endl;
  }