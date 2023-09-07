#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main() {
  srand(time(NULL));
  double balance, payment, rate, sum;
  rate = rand() % 10 + 10;
  cout << "Enter your balance: $";
  cin >> balance;
  double starting = balance;
  cout << "Enter Monthly Payment: $";
  cin >> payment;

  cout << "Annual interest rate: " << fixed << setprecision(2) << rate << "% p.a.\n" << endl;

  cout << "Month Balance\n";
  int i = 1;
  
  while (balance > 0) {
    balance = balance - payment;
    balance = balance+(balance*(rate/100/12));
    sum = sum + (balance*(rate/100/12));
    cout << i << " $  " << fixed << setprecision(2) << balance << endl;
    i++;
    if (payment >= balance) {
      balance = 0;
      cout << i << " $  0.00" << endl;
      break;
    }
  }

  cout << "The total amount payed is $" << sum+starting; 

  return (0);
}