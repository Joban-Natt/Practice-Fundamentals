#include <iostream>
using namespace std;

int main() {
  int num = 2;
  for (int i = 0; num <= 20; i++) {
    cout << num << endl;
    num += 2;
  }
  cout << endl;

  num = 20;
  for (int i = 0; num > 0; i++) {
    cout << num << endl;
    num--;
  }
  cout << endl;

  num = 1;
  int oAdd = 0;

  cout <<  "Enter number to go to: \n";
  int par;
  cin >> par;
  for (int i = 0; num <= par; i++) {
    oAdd = oAdd + num;
    num += 2;
  }

  cout << "The sum of these odd numbers from 1 to " << par << " are " << oAdd;

  return (0);
}