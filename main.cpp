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

  cout << "Please type in the number of the month: ";
  cin >> month;
  calendar1.setMonth(month);
  cout << "\n\nPlease type in the year: ";
  cin >> year;
  cout << "\n\n";
  calendar1.setYear(year);
  calendarType(month, year);
  calendar1.printCalendar();

  cout << "Print another calendar? (y or n): ";
  cin >> answer;
  if (answer == "y")
  {
    while (answer != "n") //loop for continuing the program again
    {
      cout << "Please type in the number of the month: ";
      cin >> month;
      calendar1.setMonth(month);
      cout << "\n\nPlease type in the year: ";
      cin >> year;
      cout << "\n\n";
      calendar1.setYear(year);
      calendarType(month, year);
      calendar1.printCalendar();

      cout << "Print another calendar? (y or n): ";
      cin >> answer;
    }
  }
  else
  {
    
  }
  return 0;
}