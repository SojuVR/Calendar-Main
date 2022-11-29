/*This program will act as a calendar for a user to find specific days. This will include the entire calendar program. It will take the month and year input fromt he user, then it will create a table of that specific month of that year. THe program can be repeated.*/
#include <iostream>
#include <string>
#include "calendarType.h"

using namespace std;

int main()
{
  calendarType calendar1;
  string answer; //for user input of printing another calendar
  int month;
  int year;
  bool tryAgain = true;

  cout << "Please type in the number of the month: ";
  cin >> month;
  while (tryAgain)
  {
    try 
    {
      calendar1.setMonth(month); 
      tryAgain = false;
    }
    catch (dateType::invalidMonth calendar1)
    {
      cout << calendar1.what() << endl;
      cout << "Please retry: ";
      cin >> month;
    }
  }
  tryAgain = true;
  cout << "Please type in the year: ";
  cin >> year;
  cout << "\n";
  while (tryAgain)
  {
    try
    {
      calendar1.setYear(year);
      tryAgain = false;
    }  
    catch (dateType::invalidYear calendar1)
    {
      cout << calendar1.what() << endl;
      cout << "Please retry: ";
      cin >> year;
    }  
  }
  calendarType(month, year);
  calendar1.printCalendar(month, year);

  cout << "\n\nPrint another calendar? (y or n): ";
  cin >> answer;
  if (answer == "y")
  {
    tryAgain = true;
    while (answer != "n") //loop for continuing the program again
    {
      cout << "Please type in the number of the month: ";
      cin >> month;
      while (tryAgain)
      {
        try 
        {
          calendar1.setMonth(month); 
          tryAgain = false;
        }
        catch (dateType::invalidMonth calendar1)
        {
          cout << calendar1.what() << endl;
          cout << "Please retry: ";
          cin >> month;
        }
      }
      tryAgain = true;
      cout << "Please type in the year: ";
      cin >> year;
      cout << "\n";
      while (tryAgain)
      {
        try
        {
          calendar1.setYear(year);
          tryAgain = false;
        }  
        catch (dateType::invalidYear calendar1)
        {
          cout << calendar1.what() << endl;
          cout << "Please retry: ";
          cin >> year;
        }
      }
      calendarType(month, year);
      calendar1.printCalendar(month, year);

      cout << "\n\nPrint another calendar? (y or n): ";
      cin >> answer;
    }
  }
  else
  {
    
  }
  return 0;
}