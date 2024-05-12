#include <bits/stdc++.h>
#include <ctime>
#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;

void Slots(float &coins) {
  vector<string> slotHexN = {"0", "1", "2", "3", "4", "5", "6", "7",
                             "8", "9", "A", "B", "C", "D", "E", "F"};
  vector<int> slotComp = {};

  srand(time(NULL));
  bool flag = true;

  string anticipation;
  // Anticipation mode enables time delay between rolling slots
  cout << "Would you like to enable \033[1;40mAnticipation mode\033[0m This will make a timed delay when spinning slots. Answer \033[32m'yes'\033[0m or \033[31m'no'\033[0m\n";
  while (flag) {
    cin >> anticipation;
    if (anticipation == "Yes" || anticipation == "yes") {
      anticipation = "yes";
      flag = false;
      break;
    } else if (anticipation == "No" || anticipation == "no") {
      flag = false;
      break;
    } else {
      cout << "Invalid input, please try again.\n";
    }
  }

  flag = true;
  while (flag) {
    if (coins < 12.5) {
      cout << endl
           << "Uh Oh! You are out of coins." << endl
           << "Remember! 93.8% of Gamblers give up before they win!" << endl;
      flag = false;
      break;
    }
    cout << endl
         << "What would you like to spin? Input [1] for Binary, [2] "
            "Hexadecimal, or [3] for Decimal. If "
            "you "
            "would like to exit, input [4]."
         << endl;
    string sChoice;
    cin >> sChoice;

    if (sChoice == "1") {
      coins -= 12.5;
      for (int i = 0; i < 3; i++) {
        int slotChoice = rand() % 2;
        slotComp.push_back(slotChoice);
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      if (slotComp[0] == 1) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      cout << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |     |     |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      if (slotComp[0] == 1 && slotComp[1] == 1) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |  " << slotComp[1] << "  |     |"
           << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == 1 && slotComp[1] == 1 && slotComp[2] == 1) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |  " << slotComp[1] << "  |  "
           << slotComp[2] << "  |" << endl
           << "|_____|_____|_____|\033[0m" << endl;
      if (slotComp[0] == 1 && slotComp[1] == 1 && slotComp[2] == 1) {
        cout << endl
             << endl
             << "Congratulations you just won 25 coins! Let's keep this "
                "streak going!"
             << endl;
        coins += 25;
      }
      slotComp.clear();
      cout << endl;
    } else if (sChoice == "2") {
      coins -= 12.5;

      for (int i = 0; i < 3; i++) {
        int slotChoice = rand() % 16;
        slotComp.push_back(slotChoice);
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << "\033[0;32m";
      cout << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotHexN[slotComp[0]] << "  |     |     |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == slotComp[1]) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotHexN[slotComp[0]] << "  |  " << slotHexN[slotComp[1]]
           << "  |     |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == slotComp[1] && slotComp[0] == slotComp[2]) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotHexN[slotComp[0]] << "  |  " << slotHexN[slotComp[1]]
           << "  |  " << slotHexN[slotComp[2]] << "  |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == 15 && slotComp[0] == slotComp[1] &&
          slotComp[1] == slotComp[2]) {
        cout << endl
             << endl
             << "Congratulations you just won 250,000 coins! Let's keep this "
                "streak going!"
             << endl;
        coins += 250000;
      }

      slotComp.clear();
      cout << endl;

    } else if (sChoice == "3") {
      coins -= 12.5;
      for (int i = 0; i < 3; i++) {
        int slotChoice = rand() % 10;
        slotComp.push_back(slotChoice);
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << "\033[0;32m";
      cout << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |     |     |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == slotComp[1]) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |  " << slotComp[1] << "  |     |"
           << endl
           << "|_____|_____|_____|\033[0m" << endl;

      if (slotComp[0] == slotComp[1] && slotComp[0] == slotComp[2]) {
        cout << "\033[0;32m";
      } else {
        cout << "\033[0;31m";
      }

      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      cout << endl
           << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |  " << slotComp[1] << "  |  "
           << slotComp[2] << "  |" << endl
           << "|_____|_____|_____|\033[0m" << endl;
      if (slotComp[0] == 7 && slotComp[0] == slotComp[1] &&
          slotComp[1] == slotComp[2]) {
        cout << endl
             << endl
             << "Congratulations you just won 15,000 coins! Let's keep this "
                "streak going!"
             << endl;
        coins += 15000;
      }
      slotComp.clear();
      cout << endl;
    } else if (sChoice == "4") {
      cout << "Thank you for playing." << endl;
      flag = false;
      break;
    } else {
      cout << "That input was invalid please try again." << endl;
    }

    cout << endl;
  }
}

int main() {
  float coins;
  bool flag = true;
  while (flag) {
    cout << "\033[033mHow many coins do you have? You need atleast 13 to play!"
         << endl;
    cin >> coins;
    cout << "\033[0m" << endl;
    if (coins >= 12.5) {
      Slots(coins);
      break;
      flag = false;
    } else {
      cout << "\033[31mThat is not enough coins to play. Please direct "
              "yourself to the shop to purchase more to have a chance at some "
              "\033[42mBIG WINS.\033[0m\n"
           << endl;
    }
  }
  cout << endl
       << "You now have " << coins << " coins. Purchase more in the shop!";
}
