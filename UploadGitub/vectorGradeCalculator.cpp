#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Grade calculator
void gradeCalc() {
  vector<float> grades;
  float score;

  while (true) {
    cout << "Please enter your quarterly grade (-1 to quit): ";
    cin >> score;
    if (score == -1) {
      break;
    }
    grades.push_back(score);
  }

  float sum = 0;

  for (int i = 0; i < grades.size(); i++) {
    sum = sum + grades[i];
  }

  float avg = sum / grades.size();
  float maxReq;
  float minReq;

  if (avg >= 90) {
    minReq = (360 - sum) / (4 - grades.size());
    cout << "Congratulations you have an A. To maintain this, you need to "
            "average "
         << minReq << endl;
  } else if (avg >= 80 && avg < 90) {
    maxReq = (360 - sum) / (4 - grades.size());
    minReq = (320 - sum) / (4 - grades.size());

    cout << "To get an A, you need to average: " << maxReq << endl;
    cout << "To get a B, you need to average: " << minReq << endl;
  } else if (avg >= 70 && avg < 80) {
    maxReq = (320 - sum) / (4 - grades.size());
    minReq = (280 - sum) / (4 - grades.size());

    cout << "To get a B, you need to average: " << maxReq << endl;
    cout << "To get a C, you need to average: " << minReq << endl;
  } else if (avg >= 60 && avg < 70) {
    maxReq = (280 - sum) / (4 - grades.size());
    minReq = (240 - sum) / (4 - grades.size());

    cout << "To get a C, you need to average: " << maxReq << endl;
    cout << "To get a D, you need to average: " << minReq << endl;
  } else if (avg >= 0 && avg < 60) {
    maxReq = (240 - sum) / (4 - grades.size());
    minReq = (200 - sum) / (4 - grades.size());

    cout << "To get a D, you need to average: " << maxReq
         << "\nOtherwise you will fail" << endl;
  } else {
    cout << "Invalid Inputs\n";
  }
}

int main() {
  gradeCalc();
}