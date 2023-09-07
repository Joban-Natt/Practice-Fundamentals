#include <iostream>
using namespace std;

int DaysToHrsMins(int days, int &hr, int &min){
  //calculates the hours and minutes
  hr = days*24;
  min = hr*60;

  return (days);
}

int main() {
  //initializing variables
  int days, hr, min;
  //Input number of days
  cout << "Please input number of days: ";
  cin >> days;
  //calls function
  DaysToHrsMins(days, hr, min);
  //outputs results
  cout << days << " day(s) is " << hr << " hours or " << min << " minutes.";
  return (0);
}