/*I removed the print() function because getDay() does the same thing.*/
#include<string>

using namespace std;

class dayType
{
  public:
  //finds the day input and sees if it matches the days provided in array
  void setDay(string d);
  //returns the day and can print it
  string getDay() {return day;}
  //gets the next day of the day that was returned
  string nextDay();
  //gets the previous day of the day that was returned
  string previousDay();
  //adds a certain amount of days to the returned day
  void addDay(int n);

  //default constructor
  dayType();
  //constructor with parameters
  dayType(string d);

  private:
  //variable for the day
  string day;
  //days of the week
  static string weekDay[7];
};