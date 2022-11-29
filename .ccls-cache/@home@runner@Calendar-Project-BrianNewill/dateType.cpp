#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType()
{
  month = 1;
  day = 1;
  year = 1900;
}

dateType::dateType(int m, int d, int y)
{
  if (1900 <= y)
  {
    year = y;
  }
  leapYear(year);
  
  if (0 < m && m <= 12)
  {
    month = m;
  }

  lastDayOfMonth(m);
  if (0 < d && d <= lastDayOfMonth(m))
  {
    day = d;
  }
}

int dateType::lastDayOfMonth(int m)
{
  int lastDay;
  switch (m)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        lastDay = 31;
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        lastDay = 30;
        break;
      case 2:
        if (leapYear(year) == true)
        {
          lastDay = 29;
          break;
        }
        else
        {
          lastDay = 28;
          break;
        }
    }
  return lastDay;
}

bool dateType::leapYear(int y)
{
  if (y % 4 == 0)
  {
    if (y % 100 == 0)
    {
      if (y % 400 == 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return true;
    }
  }
  else
  {
    return false;
  }
}

int dateType::daysPassed()
{
  int passed = 0;
  int daysInMonth;
  for (int i = 1900; i < year; i++)
    {
      leapYear(i);
      if (leapYear(i) == true)
      {
        passed = passed + 366;
      }
      else
      {
        passed = passed + 365;
      }
    }
  for (int j = 1; j < month; j++)
    {
      daysInMonth = lastDayOfMonth(j);
      passed = passed + daysInMonth;
    }
  passed = passed + day;
  return passed;
}

int dateType::daysLeft()
{
  int remaining;
  int passed = daysPassed();
  
  leapYear(year);
  if (leapYear(year) == true)
  {
    remaining = 366 - passed;
  }
  else
  {
    remaining = 365 - passed;
  }
  return remaining;
}

void dateType::addDay(int d)
{
  int lastDay;
  lastDay = lastDayOfMonth(month);
  day = day + d;
  if (day > lastDay)
  {
    day = day - lastDay;
    month++;
    if (month > 12)
    {
      month = 1;
      year++;
    }
  }
}

void dateType::setMonth(int m)
{
  try
  {
    if (1 > m || m > 12)
    {
      throw invalidMonth();
    }
    month = m;
  }
  catch (invalidMonth)
  {
    throw;
  }
}

void dateType::setDay(int d)
{
  lastDayOfMonth(month);
  if (0 < d && d <= lastDayOfMonth(month))
  {
    day = d;
  }
}

void dateType::setYear(int y)
{
  try
  {
    if (1900 > y)
    {
      throw invalidYear();
    }
    year = y;
    leapYear(year);
  } 
  catch (invalidYear)
  {
    throw;
  }
}

void dateType::print()
{
  cout << month << "-" << day << "-" << year << endl;
}