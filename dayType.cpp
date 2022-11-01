/*I did not add variables such as "int index" because at the moment, just for this submission, I did not find the need for a failsafe for if the string input is incorrect because there is nothing requiring it now. I will, and know how to, add it when I need to be able to adjust for invalid inputs.*/
#include<iostream>
#include<string>
#include"dayType.h"

using namespace std;
//list of available days of the week
string dayType::weekDay[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void dayType::setDay(string d)
{
  for (int i = 0; i < 7; i++) //runs through all strings until one matches
    {
      if (d == weekDay[i])
      {
        day = weekDay[i];
        break;
      }
    }
}

string dayType::nextDay()
{
  int i;
  string nextDay;
  for (int i = 0; i < 7; i++)
    {
      if (day == weekDay[i])
      {
        i = i+1;
        nextDay = weekDay[i];
        if (i == 7) //if the array count goes over the amount of days, resets to bottom
        {
          nextDay = weekDay[0];
          break;
        }
      }
    }
  return nextDay;
}
  
string dayType::previousDay()
{
  int i;
  string previousDay;
  for (int i = 0; i < 7; i++)
    {
      if (day == weekDay[i])
      {
        i = i-1;
        previousDay = weekDay[i];
        if (i < 0) //if the array count goes below the amount of days, resets to top
        {
          previousDay = weekDay[6];
          break;
        }
      }
    }
  return previousDay;
}

void dayType::addDay(int n)
{
  int i;
  for (i = 0; i < 7; i++)
    {
      if (day == weekDay[i])
      {
        day = weekDay[i];
        break;
      }
    }
  i = n; //adds the total days
  while (i >= 7) //makes it so i is within the array of 7
    {
      i = i-7;
    }
  day = weekDay[i];
}

dayType::dayType()
{
  day = weekDay[0];
}

dayType::dayType(string d)
{
  setDay(d);
}