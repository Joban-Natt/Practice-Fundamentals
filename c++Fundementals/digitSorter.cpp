#include <iostream>
using namespace std;

string splitIt(string num, string digit1, string digit2, string digit3) {
  // outputs the 3 sepreate digits
  for (int i = 0; i < num.length(); i++) {
    cout << "Digit " << i + 1 << " is: " << num[i] << endl;
  }

  // asks for your numbers
  int arraydigits[3] = {};
    cout << "Please re-enter digits of your number: ";
    int order;
  cin >> order;
    arraydigits[0] = (order-order%100)/100;
  arraydigits[1] = (order%100)/10;
  arraydigits[2] = order%10;

  // arranges the order of the digits and outputs them from lowest to highest
  for (int i = 0; i < 3; i++) {
    if (arraydigits[0] < arraydigits[1] && arraydigits[0] < arraydigits[2]) {
      cout << arraydigits[0] << endl;
      arraydigits[0] = 10000;
    } else if (arraydigits[1] < arraydigits[0] &&
               arraydigits[1] < arraydigits[2]) {
      cout << arraydigits[1] << endl;
      arraydigits[1] = 10000;
    } else if (arraydigits[2] < arraydigits[0] &&
               arraydigits[2] < arraydigits[1]) {
      cout << arraydigits[2] << endl;
      arraydigits[2] = 100000;
    }
  }

  //returns the original value of the number
  return (num);
}

int main() {
  bool flag = true;
  //allows program to rerun
  while (flag) {
    //varaibls used
    string num, digit1, digit2, digit3;
    cout << "Enter a 3 digit number: ";
    cin >> num;
    //function called with parameters
    splitIt(num, digit1, digit2, digit3);
    //asks for reuse
    cout << "Would you like to use the program again? Enter 'y' or 'n'\n";
    string ans;
    cin >> ans;
    if (ans == "n") {
      cout << "Thank you for using the program.";
      flag = false;
      break;
    } else {
      continue;
    }
  }
  return (0);
}