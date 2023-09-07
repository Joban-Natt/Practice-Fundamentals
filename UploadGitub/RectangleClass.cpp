#include <iostream>
using namespace std;

class Rect {
public:
    // Variables required for area calculation
    int length;
    int breadth;

    // Constructor to initialize variables
    Rect(int len, int brth) : length(len), breadth(brth) {}

    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
};


int main() {
  int len, brth;

  cin >> len;
  cin >> brth;
  // Create object of Rectangle class
  Rect rectangle(len, brth);

  // Call getArea() function
  cout << "Area = " << rectangle.getArea();

  return 0;
}