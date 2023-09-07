#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void oddOrEven(vector<int> num) {
  vector<int> odd;
  vector<int> even;

  for (int i = 0; i < num.size(); i++) {
    if (num[i] % 2 == 0) {
      even.push_back(num[i]);
    } else {
      odd.push_back(num[i]);
    }
  }

  for (int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }

  cout << endl;

  for (int i = 0; i < odd.size(); i++) {
    cout << odd[i] << " ";
  }
}

int main() {
  // Odd and even sorting
  vector<int> num = {};
  int input;

  cout << "Input numbers (-1 to quit): \n";

  while (true) {
    cin >> input;
    if (input == -1) {
      break;
    }
    num.push_back(input);
  }

  oddOrEven(num);
  num.clear();
  cout << endl << endl;

  // Least to greatest sorting
  while (true) {
    cout << "Please enter a positive number (-1 to quit): ";
    cin >> input;
    if (input == -1) {
      break;
    }
    num.push_back(input);
  }

  sort(num.begin(), num.end());

  for (int i = 0; i < num.size(); i++) {
    cout << num[i] << endl;
  }

  num.clear();
  cout << endl << endl;
}