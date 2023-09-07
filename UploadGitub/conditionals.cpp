#include <iostream>
using namespace std;

int main() {
  int num, age, height;
  string country;
  
  cout << "Please input a number\n";
  cin >> num;
  if (num%2 != 0) {
    cout << "This number is odd\n" << endl;
  } else {
    cout << "This number is even\n" << endl;
  }
  
  cout << "Enter a number\n";
  cin >> num;
  if (num >= 0) {
    cout << "This number is positive\n" << endl;
  } else if (num < 0) {
    cout << "This number is negative\n" << endl;
  } 

  cout << "Enter your age\n";
  cin >> num;
  if (num > 20) {
    cout << "You are older than 20\n" << endl;
  } else if (num == 20) {
    cout << "You are 20\n" << endl;
  } else if (num < 20) {
    cout << "You are younger than 20\n" << endl;
  }

  cout << "Please enter your packages destination ---> CAN, USA, or INT\n";
  cin >> country;
  if (country == "CAN") {
    cout << "Your fee is $0.85\n" << endl;
  } else if (country == "USA") {
    cout << "Your fee is $1.20\n" << endl;
  } else if (country == "INT") {
    cout << "Your fee is $2.50\n" << endl;
  } else {
    cout << "Please enter a valid location\n" << endl;
  }
  
  age = 2;
  if (age > 5) {
    if (age >= 18){
      cout << "They are an adult\n" << endl;
    } 
    } else {
    cout << "They are a child\n" << endl;
  //The output will be they are a child
    }

  cout << "Enter number of strokes\n";
  cin >> num;
  switch (num) {
    case 1:
    cout << "Hole in one!\n" << endl;
    break;
    case 2:
    cout << "Double-Eagle\n" << endl;
    break;
    case 3:
    cout << "Eagle\n" << endl;
    break;
    case 4:
    cout << "Birdie\n" << endl;
    break;
    case 5:
    cout << "Par\n" << endl;
    break;
    case 6:
    cout << "Bogey\n" << endl;
    break;
    case 7:
    cout << "Double-Bogey\n" << endl;
    break;
    case 8:
    cout << "Triple-Bogey\n" << endl;
    break;
    default:
    cout << "Disaster\n" << endl;
  }

  cin >> height;
  if (height < 150){
    cout << "Short\n" << endl;
  }
  if ((height > 150) && (height < 175)) {
    cout << "Medium\n" << endl;
  }
  if (height > 175) {
    cout << "Tall\n" << endl;
  }
  //Define height and use curly brackets

  /* int age = 2, height = 81, weight = 13
  (height > weight) && (weigth != 10) ---> True
  (age != 2)||(height>60) ---> True
  !(weigth == 15) ---> True
  (age*weigth > height) ---> False
  !(age == 2) || (age == 3) ---> False*/
}