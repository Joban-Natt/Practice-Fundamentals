#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void circleCalc(float &radius, float &area, float &cir) {
  cout << "Enter the radius: ";
  cin >> radius;
  cir = 2 * M_PI * radius;
  area = M_PI * (pow(radius, 2));
}

int main() {
  cout << endl;
  cout << "Enter point p\n";
  float pn, qn, rn, sn, slope, xNum, yNum;
  cin >> pn;
  cout << "Enter point q\n";
  cin >> qn;
  cout << "Enter point r\n";
  cin >> rn;
  cout << "Enter point s\n";
  cin >> sn;

  xNum = rn-pn;
  yNum = sn-qn;

  if (xNum<0 && yNum<0) {
    xNum = xNum*-1;
    yNum = yNum*-1;
  }
  slope = yNum/xNum;
  cout << "The slope is " << yNum << "/" << xNum << endl;
  float yint = qn-(slope*pn);
  cout << "The y-int is " << yint << endl << "The equation of the line is y = " << yNum << "/" << xNum << "x ";
  
  if (yint > 0) {
    cout << "+ " << yint << endl;
  } else if (yint < 0) {
    yint=yint*-1;
    cout << "- " << yint << endl;
  } else {
    cout << endl;
  }
}