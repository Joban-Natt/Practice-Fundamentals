#include <bits/stdc++.h>
using namespace std;

int main() {
  float dm, cost, speed, bur, fry, pop, total, cash;
  int players, teams, min, quar, nick, dime, pen, change, pots, bbox, sbox,
      vbox, bday, bmon, byear, cday, cmon, cyear, days;
  string num;

  // 3
  cout << "Enter the diameter of the pizza: ";
  cin >> dm;
  cost = 1.2 + (0.05 * dm * dm);
  cout << "The cost is " << fixed << setprecision(2) << cost << endl << endl;

  // 4
  cout << "Enter a speed: ";
  cin >> speed;
  cout << "You will arrrive in " << fixed << setprecision(1)
       << (32 / speed) * 60 << " minutes" << endl
       << endl;

  // 7
  cout << "Enter number of players: ";
  cin >> players;
  cout << "There will be " << players / 7 << " teams with " << players % 7
       << " left over." << endl
       << endl;

  // 8
  cout << "Enter number of minutes: ";
  cin >> min;
  cout << "This is " << min / 60 << " hours and " << min % 60 << " minutes"
       << endl
       << endl;

  // 9
  cout << "Enter the amount of change in cents: ";
  cin >> change;
  quar = change / 25;
  change = change % 25;
  dime = change / 10;
  change = change % 10;
  nick = change / 5;
  change = change % 5;
  pen = change;
  cout << "Quarters " << quar << endl
       << "Dime " << dime << endl
       << "Nickles " << nick << endl
       << "Pennies " << pen << endl
       << endl;

  // 10 A)
  cout << "Enter a 2 digit number: ";
  cin >> num;
  cout << "The first number is " << num[0] << endl;
  cout << "The second number is " << num[1] << endl;

  // 10 B)
  cout << "Enter a 3 digit number: ";
  cin >> num;
  cout << "The first number is " << num[0] << endl;
  cout << "The second number is " << num[1] << endl;
  cout << "The third number is " << num[2] << endl << endl;

  // 10 C)
  cout << "The sum of the digits is "
       << int(num[0]) - 48 + int(num[1]) - 48 + int(num[2]) - 48 << endl
       << endl;

  // 11
  cout << "Enter the number of flower pots: ";
  cin >> pots;
  vbox = pots / 9;
  pots = pots % 9;
  bbox = pots / 4;
  sbox = pots % 4;
  cout << "We will ship:\n"
       << vbox << " very big boxes\n"
       << bbox << " big boxes\n"
       << sbox << " small boxes\n"
       << endl;

  // 12
  cout << "Enter your birthdate (using numbers as months)\n";
  cin >> bday;
  cin >> bmon;
  cin >> byear;
  cout << "Enter the current date\n";
  cin >> cday;
  cin >> cmon;
  cin >> cyear;

  days = (cyear - byear) * 365 + (cmon - bmon) * 30 + (cday - bday);

  cout << "You have been alive for " << days << " days\n"
       << "You have been asleep for " << days / 3 << " days" << endl
       << endl;

  // 13
  cout << "Enter the number of burgers: ";
  cin >> bur;
  cout << "Enter the number of fries: ";
  cin >> fry;
  cout << "Enter the number of sodas: ";
  cin >> pop;

  total = (bur * 1.49) + (fry * 0.89) + (pop * 0.99);
  cout << "The total before tax is: $" << fixed << setprecision(2) << total
       << endl
       << "The tax is: $" << fixed << setprecision(2) << total * 0.06 << endl
       << "The grand total is: $" << fixed << setprecision(2) << total * 1.06
       << endl
       << endl;

  cout << "Enter amount tendered: ";
  cin >> cash;
  cout << "The change is: $" << fixed << setprecision(2) << cash - total;
}