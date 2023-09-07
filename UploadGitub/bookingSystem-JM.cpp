#include <bits/stdc++.h>
#include <vector>
using namespace std;

string menu() {
  cout << "Muted\n";
  return "Hello World";
}

int main() {
  cout<<"Welcome to our booking system! We have 14 time slots starting at 8:00 AM to 2:30 PM at half hour increments. Please input a time that you would like to have a booking start at: ";
  string start;
  cin >> start;
  string booking [14] = {"8:00", "8:30", "9:00", "9:30", "10:00", "10:30", "11:00", "11:30", "12:00", "12:30", "1:00", "1:30", "2:00", "2:30"};
    if (start == "8:00" ||start == "8:30" ||start == "9:00" ||start == "9:30" ||start == "10:00" ||start == "10:30" ||start == "11:00" ||start == "11:30" ||start == "12:00" ||start == "12:30" ||start == "1:00" ||start == "1:30" ||start == "2:00" ||start == "2:30") {
      for(int i=0; i < *(&booking + 1) - booking; i++){
    cout << "h\n";
  }
  return 0;
    } else {
    cout << "Please enter a time\n" << endl;
    }

}

