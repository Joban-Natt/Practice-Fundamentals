#include <bits/stdc++.h>
#include <ctime>
#include <iostream>
#include <unistd.h>
using namespace std;

void Slots(float &coins) {
  // Stores the generated slots
  vector<int> slotComp = {};

  float bet;
  string anticipation;

  srand(time(NULL));
  bool flag = true;

  // Anticipation mode enables time delay between rolling slots
  cout << "Would you like to enable \033[1;40mAnticipation mode\033[0m This "
          "will make a timed delay when spinning slots. Answer "
          "\033[32m'yes'\033[0m or \033[31m'no'\033[0m\n";
  while (flag) {
    cin >> anticipation;
    // Checks if you said yes or no
    if (anticipation == "Yes" || anticipation == "yes") {
      anticipation = "yes";
      cout << endl << "\033[32mAnticipation Mode Enabled\033[0m" << endl;
      flag = false;
      break;
    } else if (anticipation == "No" || anticipation == "no") {
      flag = false;
      cout << endl << "\033[31mAnticipation Mode Disabled\033[0m" << endl;
      break;
    } else {
      cout << "\033[1;31mInvalid input Please try again.\n\033[0m";
    }
  }

  flag = true;
  while (flag) {
    // Makes sure you have enough coins everytime you play
    if (coins < 15) {
      cout << endl
           << "Uh Oh! You are out of coins." << endl
           << "Remember! 93.8% of Gamblers give up before they win!" << endl;
      flag = false;
      break;
    }
    // Asks you if you want to play
    cout << endl
         << "Would you like to spin? Input [1] to roll Decimal slots. If you "
            "would like to exit, input [2]."
         << endl;
    string sChoice;
    cin >> sChoice;

    // Run this if choice is 1 (choosing to play)
    if (sChoice == "1") {
      bool fflag = true;
      while (fflag) {

        /* Asks for your betting amount and makes sure that you aren't betting
        more money than you have */
        cout << endl
             << "How much would you like to bet? You have " << coins << " coins"
             << endl;
        cin >> bet;
        if (bet <= coins) {
          coins -= bet;
          fflag = false;
          break;
        } else {
          cout << "\033[1;31mYou do not have that many coins. Please try "
                  "again.\n\033[0m";
        }
      }

      // Generates the options within your slots
      for (int i = 0; i < 3; i++) {
        int slotChoice = rand() % 10;
        slotComp.push_back(slotChoice);
      }

      // Delays to build up exitement if the user wants it (repeats 3 times)
      if (anticipation == "yes") {
        cout << flush;
        usleep(1000000);
      }

      // First slot is always appears winning
      cout << "\033[0;32m";

      // Displays the slot (repeats 3 times)
      cout << " _________________" << endl
           << "|     |     |     |" << endl
           << "|  " << slotComp[0] << "  |     |     |" << endl
           << "|_____|_____|_____|\033[0m" << endl;

      // Colour changes if you are winning or losing (repeats 2 times)
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

      // Checks if you've won or lost and outputs the appropriate message
      if (slotComp[0] == slotComp[1] && slotComp[1] == slotComp[2]) {
        cout << endl
             << endl
             << "\033[1;32mCongratulations you just won " << bet * 100
             << " coins! Let's keep this "
                "streak going!\033[0m"
             << endl;
        coins += bet * 100;
      } else {
        cout << endl
             << endl
             << "\033[31mAww... you lost. Remember! 93.8% of Gamblers give up "
                "before they win!\033[0m"
             << endl;
      }

      // Clears the vector containing the generated slots
      slotComp.clear();
      cout << endl;
    } 
    
    // Thanks you and ends the program if your choice is 2
    else if (sChoice == "2") {
      cout << "Thank you for playing." << endl;
      flag = false;
      break;
    } 
    
    // Tells you to retry if you didn't input one of the options
    else {
      cout << "\033[1;31mInvalid input. Please try again.\n\033[0m" << endl;
    }

    cout << endl;
  }
}
int main() {
  float coins;
  bool flag = true;
  while (flag) {

    // Asks for your coins
    cout << "\033[033mHow many coins do you have? You need atleast 15 to "
            "play!"
         << endl;
    cin >> coins;
    cout << "\033[0m" << endl;

    // Checks if you are meeting the minimum required amount
    if (coins >= 15) {
      Slots(coins);
      break;
      flag = false;
    } else {
      cout << "\033[31mThat is not enough coins to play. Please direct "
              "yourself to the shop to purchase more to have a chance at "
              "some \033[1;32mBIG WINS.\033[0m\n"
           << endl;
    }
  }

  // Tells you how many coins you now have and encourages you to purchase more
  cout << endl
       << "You now have " << coins << " coins. Purchase more in the shop!";
}