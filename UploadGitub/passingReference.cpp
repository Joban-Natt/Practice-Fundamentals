#include <iostream>
using namespace std;

int introduction() {
  cout << "This program is able to convert days to hours and minutes. It can "
          "also convert hours to minutes. \n"
       << "Please input number of days: ";
  return (0);
}

int timeConversion(int day) {
  int hour, min;
  hour = day * 24;
  min = day * 24 * 60;
  if (day == 1) {
    cout << day << " day is " << hour << " hours or " << min << " minutes.";
  } else {
    cout << day << " days is " << hour << " hours or " << min << " minutes.";
  }
  return (0);
}

void hourConversion(int hours) {
  cout << endl << hours << " hours is " << hours * 60 << " minutes.";
}

int main() {
  introduction();
  int day;
  cin >> day;
  timeConversion(day);
  cout << "Would you also like to convert hours to minutes? Type yes or no. \n";
  string ans;
  cin >> ans;
  if (ans == "yes") {
    int hours;
    cout << "Enter numer of hours: \n";
    cin >> hours;
    hourConversion(hours);
  } else {
    cout << "Thank you for using this program.";
  }
}