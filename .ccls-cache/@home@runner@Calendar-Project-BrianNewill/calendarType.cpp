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
  cout << "        ";
  firstDate.printLongMonthYear();
  cout << "Sun " << "Mon " << "Tue " << "Wed " << "Thu " << "Fri " << "Sat" << endl;
}

void calendarType::printDays(int m, int y)
{
  int day = 1;
  int firstCol;
  string tempFirstDay;
  int lastDay;
  dateType tempMonth;
  tempMonth.setYear(y);
  lastDay = tempMonth.lastDayOfMonth(m);
  tempFirstDay = firstDay.getDay();
  if (tempFirstDay == "Sunday")
  {
    firstCol = 0;
  }
  else if (tempFirstDay == "Monday")
  {
    firstCol = 1;
    cout << setw(4) << "";
  }
  else if (tempFirstDay == "Tuesday")
  {
    firstCol = 2;
    cout << setw(8) << "";
  }
  else if (tempFirstDay == "Wednesday")
  {
    firstCol = 3;
    cout << setw(12) << "";
  }
  else if (tempFirstDay == "Thursday")
  {
    firstCol = 4;
    cout << setw(16) << "";
  }
  else if (tempFirstDay == "Friday")
  {
    firstCol = 5;
    cout << setw(20) << "";
  }
  else if (tempFirstDay == "Saturday")
  {
    firstCol = 6;
    cout << setw(24) << "";
  }
  for (firstCol; firstCol < 7; firstCol++)
        {
          days[0][firstCol] = day;
          cout << setw(3) << days[0][firstCol] << " ";
          day++;
        }
  cout << endl;
  for (int row = 1; row < 6; row++)
    {
      for (int col = 0; col < 7; col++)
        {
          days[row][col] = day;
          cout << setw(3) << days[row][col] << " ";
          day++;
          if (day == lastDay+1)
          {
            break;
          }
        }
      if (day == lastDay+1)
      {
        break;
      }
      cout << endl;
    }
}

void calendarType::printCalendar(int m, int y)
{
  printTitle();
  printDays(m, y);
}
