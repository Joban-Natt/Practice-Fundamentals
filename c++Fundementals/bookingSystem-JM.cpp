#include <bits/stdc++.h>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
using namespace std;

void entry() {
  string user, pass, studentNum;
  // Account sign-up/login
  cout
      << "Hello and welcome to our booking system! Please create a new account "
         "if you are a new student! If you are a returning student, please "
         "enter your login username and password. If you wish to sign up, "
         "please type 'register', if you wish to login, please type 'login': ";
  string action;
  // Vector to store the usernames and passwords
  vector<string> usernames;
  vector<string> passwords;
  /* Checks to see whether you are logging in or registering. Pushes the
   * username and password into the vector if registering. If logging in,
   * program, checks if the username and password match to the values in the
   * vector.*/
  cin >> action;
  if (action == "exit") {
    cout << "Thank you for using our program. if you'd like to try again, "
            "please re-run the program!";
    exit(0);
  }
  if (action == "register") {
    cout << endl;
    cout << "Please enter the student number that your account will be "
            "associated with: "
         << endl;

    // Asks for student number, new username and password
    cin >> studentNum;
    if (studentNum == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    cout << endl;
    cout << "Please enter the username you would like to use for our system "
            "(no spaces): ";
    cin >> user;
    if (user == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    usernames.push_back(user);
    cout << "Please enter your password: ";
    cin >> pass;
    if (pass == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    passwords.push_back(pass);
    cout << endl;
    cout << "Now that you have made an account, please log in to the account."
         << endl;
    cout << endl;
    cout << "Username: ";
    cin >> user;
    if (user == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    cout << "Password: ";
    cin >> pass;
    if (pass == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    /* If statement makes sure that the user can try again infinitly incase they
     * input the wrong username or password */
    if (usernames[0] == user && passwords[0] == pass) {
      cout << "SUCCESSFUL LOGIN: You are now logged in as: " << user << endl
           << endl
           << endl;
      cout << endl;
    } else if (usernames[0] != user) {
      cout << "This account does not exist. ";
      bool flag = true;
      while (flag) {
        cout << "Try again for username: ";
        cin >> user;
        if (user == "exit") {
          cout << "Thank you for using our program. if you'd like to try "
                  "again, please re-run the program!";
          exit(0);
        }
        if (user == usernames[0]) {
          bool fflag = true;
          cout << "Please input your password: ";
          while (flag) {
            cin >> pass;
            if (pass == "exit") {
              cout << "Thank you for using our program. if you'd like to try "
                      "again, please re-run the program!";
              exit(0);
            }
            if (pass == passwords[0]) {
              cout << endl;
              cout << "SUCCESSFUL LOGIN You are now logged in as: " << user
                   << endl;
              cout << endl;
              fflag = false;
              flag = false;
            } else {
              cout << "Wrong password. Try again: ";
            }
          }
        }
      }
    } else if (usernames[0] == user && passwords[0] != pass) {
      bool flag = true;
      while (flag) {
        cout << "The password is incorrect. Please try again: ";
        cin >> pass;
        if (pass == "exit") {
          cout << "Thank you for using our program. if you'd like to try "
                  "again, please re-run the program!";
          exit(0);
        }
        if (pass == passwords[0]) {
          cout << "SUCCESSFUL LOGIN: You are now logged in as: " << user
               << endl;
          flag = false;
        }
      }
    }
  } else if (action == "login") {
    cout << endl;
    if (usernames.size() == 0) {
      // If no accounts exist, automatically registers
      cout << "Sorry, it looks like there are no accounts in our system yet, "
              "please create a "
              "new one.\n";
      cout << endl;
      // Account is created with student number, username, and password
      cout << "Please enter your student number that your account will be "
              "associated with: ";
      cin >> studentNum;
      if (studentNum == "exit") {
        cout << "Thank you for using our program. if you'd like to try again, "
                "please re-run the program!";
        exit(0);
      }
      cout << endl;
      cout << "Please enter the username you would like to use for our system "
              "(no spaces): ";
      cin >> user;
      if (user == "exit") {
        cout << "Thank you for using our program. if you'd like to try again, "
                "please re-run the program!";
        exit(0);
      }
      usernames.push_back(user);
      cout << "Please enter your password: ";
      cin >> pass;
      if (pass == "exit") {
        cout << "Thank you for using our program. if you'd like to try again, "
                "please re-run the program!";
        exit(0);
      }
      cout << endl;
      passwords.push_back(pass);
      // Prompts user for Username and Password
      cout << "Now that you have made an account, please log in to the account."
           << endl;
      cout << "Username: ";
      cin >> user;
      if (user == "exit") {
        cout << "Thank you for using our program. if you'd like to try again, "
                "please re-run the program!";
        exit(0);
      }
      cout << "Password: ";
      cin >> pass;
      if (pass == "exit") {
        cout << "Thank you for using our program. if you'd like to try again, "
                "please re-run the program!";
        exit(0);
      }
      /* Makes sure the username and password exist within the vector and allows
       * user to mess up as many times as possible */
      if (usernames[0] == user && passwords[0] == pass) {
        cout << "SUCCESSFUL LOGIN: You are now logged in as: " << user << endl;
        cout << endl;
      } else if (usernames[0] == user && passwords[0] != pass) {
        cout << "The password is incorrect. Please try again: ";
        bool flag = true;
        while (flag) {
          cout << "The password is incorrect. Please try again: ";
          cin >> pass;
          if (pass == "exit") {
            cout << "Thank you for using our program. if you'd like to try "
                    "again, please re-run the program!";
            exit(0);
          }
          if (pass == passwords[0]) {
            cout << "SUCCESSFUL LOGIN: You are now logged in as: " << user
                 << endl;
            flag = false;
          }
        }
      } else if (usernames[0] != user) {
        cout << "This account does not exist. Please re-check the username "
                "that you typed. ";
        bool flag = true;
        while (flag) {
          cout << "Try again. Username: ";
          cin >> user;
          if (user == "exit") {
            cout << "Thank you for using our program. if you'd like to try "
                    "again, please re-run the program!";
            exit(0);
          }
          if (user == usernames[0]) {
            bool flag2 = true;
            while (flag2) {
              cout << "Wrong password. Try again. Password: ";
              cin >> pass;
              if (pass == "exit") {
                cout << "Thank you for using our program. if you'd like to try "
                        "again, please re-run the program!";
                exit(0);
              }
              if (pass == passwords[0]) {
                cout << "SUCCESSFUL LOGIN! You are now logged in as " << user
                     << endl;
                flag2 = false;
              }
            }
          }
        }
      }
    }
  }
}

void chromebook() {
  srand(time(NULL));

  // The vector that stores all the serial numbers
  vector<int> sNums = {};

  // Creates the serial numbers, outputs them, and puts them in the vector
  for (int i = 0; i <= 9; i++) {
    int serialOut = rand() % 90000 + 10000;
    cout << i + 1 << ". #" << serialOut << endl;
    sNums.push_back(serialOut);
  }

  // Requests an input for the serial number
  cout << "Please enter the serial number of the Chromebook you would like to "
          "book: #";
  int sNum;
  // Runs until the inputted serial number is correct
  bool flag = true;
  while (flag) {
    cin >> sNum;
    // Checks if the input matches a serial number and removes them from the
    // list
    for (int i = 0; i <= sNums.size(); i++) {
      if (sNum == sNums[i]) {
        sNums.erase(sNums.begin() + i);
        flag = false;
        break;
      } // If the serial number is wrong, program asks for it again
      else if (i == sNums.size() && sNum != sNums[i]) {
        cout << "That Chromebook does not exist. Please try again. \n"
             << "#";
      }
    }
  }
  // Outputs the remaining chromebooks
  cout
      << "Your Chromebook has been recorded, the remaining Chromebooks are: \n";
  for (int i = 0; i <= sNums.size() - 1; i++) {
    cout << i + 1 << ". #" << sNums[i] << endl;
  }
  cout << endl << "Thank you for using our booking system!";
}

void GSroom(vector<string> &timesGSroom, vector<string> &GSstop,
            string toBook) {
  string timeSelect;
  string GSstopTime;
  cout << endl;
  cout << "Perfect. Now please select a time from the list of availible times: "
       << endl;
  cout << endl;
  // Outputs all the availible times to start booking
  for (int i = 0; i < (GSstop.size()); i++) {
    cout << timesGSroom[i] << endl;
  }

  bool flag = true;
  while (flag) {
    cin >> timeSelect;
    if (timeSelect == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    for (int i = 0; i < timesGSroom.size(); i++) {
      if (timeSelect == timesGSroom[i]) {
        flag = false;
      } else if ((i == timesGSroom.size()) && (timeSelect != timesGSroom[i])) {
        cout << "You cannot start at this time. Please input a valid time: \n";
      }
    }
  }

  // Gets the index of the selected time in the vector
  flag = true;
  int iterator;
  for (int i = 0; i < timesGSroom.size(); i++) {
    if (timesGSroom[i] == timeSelect) {
      iterator = i;
    }
  }
  cout << "Please select the time that you would like to finish your booking "
          "at: \n";
  cout << endl;
  // Lists the times you can book until
  for (int i = iterator; i < iterator + 6; i++) {
    if (GSstop[i] == "3:00PM") {
      cout << GSstop[i] << endl;
      break;
    } else {
      cout << GSstop[i] << endl;
    }
  }
  // Asks for the time that you would end your booking
  flag = true;
  while (flag) {
    cin >> GSstopTime;
    if (GSstopTime == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    for (int i = iterator; i < iterator + 6; i++) {
      if (GSstopTime == GSstop[i]) {
        flag = false;
      } else if (i == iterator + 5 && GSstopTime != GSstop[i]) {
        cout << "You cannot stop at this time. Please input a valid time: \n";
      }
    }
  }

  // Confirmation message
  cout << endl;
  cout << "Perfect. Your booking has been confirmed. An email will be sent to "
          "the student number that you registered with.\n";

  // Gets the index of the time you stop booking
  flag = true;
  int iteratorStop;
  for (int i = 0; i < GSstop.size(); i++) {
    if (GSstop[i] == GSstopTime) {
      iteratorStop = i;
    }
  }
  // Removes the times you can book from the options
  for (int i = iterator; i <= iteratorStop + 1; i++) {
    timesGSroom.erase(timesGSroom.begin() + iterator);
  }
  // Lists the new options
  cout << "The remaining times available to book are: \n";
  for (int i = 0; i <= timesGSroom.size(); i++) {
    cout << timesGSroom[i] << endl;
  }
  // Checks to see whether the user is done or would like to book a chromebook
  if (toBook == "both") {
    chromebook();
  } else {
    cout << "Thank you for using our booking system!";
  }
}

int main() {
  entry();
  // Lists of times availible for every room
  vector<string> timesGSroom = {"8:00AM",  "8:30AM",  "9:00AM",  "9:30AM",
                                "10:00AM", "10:30AM", "11:00AM", "11:30AM",
                                "12:00PM", "12:30PM", "1:00PM",  "1:30PM",
                                "2:00PM",  "2:30PM"};

  vector<string> GSstop = {"8:30AM",  "9:00AM",  "9:30AM",  "10:00AM",
                           "10:30AM", "11:00AM", "11:30AM", "12:00PM",
                           "12:30PM", "1:00PM",  "1:30PM",  "2:00PM",
                           "2:30PM",  "3:00PM"};

  vector<string> timesSRroom = {"8:00AM",  "8:30AM",  "9:00AM",  "9:30AM",
                                "10:00AM", "10:30AM", "11:00AM", "11:30AM",
                                "12:00PM", "12:30PM", "1:00PM",  "1:30PM",
                                "2:00PM",  "2:30PM",  "3:00PM"};
  vector<string> SRstop = {"8:30AM",  "9:00AM",  "9:30AM",  "10:00AM",
                           "10:30AM", "11:00AM", "11:30AM", "12:00PM",
                           "12:30PM", "1:00PM",  "1:30PM",  "2:00PM",
                           "2:30PM"};
  vector<string> timesMRroom = {"8:00AM",  "8:30AM",  "9:00AM",  "9:30AM",
                                "10:00AM", "10:30AM", "11:00AM", "11:30AM",
                                "12:00PM", "12:30PM", "1:00PM",  "1:30PM",
                                "2:00PM",  "2:30PM",  "3:00PM"};
  vector<string> MRstop = {"8:30AM",  "9:00AM",  "9:30AM",  "10:00AM",
                           "10:30AM", "11:00AM", "11:30AM", "12:00PM",
                           "12:30PM", "1:00PM",  "1:30PM",  "2:00PM",
                           "2:30PM",  "3:00PM"};
  vector<string> timesALroom = {"8:00AM",  "8:30AM",  "9:00AM",  "9:30AM",
                                "10:00AM", "10:30AM", "11:00AM", "11:30AM",
                                "12:00PM", "12:30PM", "1:00PM",  "1:30PM",
                                "2:00PM",  "2:30PM"};
  vector<string> ALstop = {"8:30AM",  "9:00AM",  "9:30AM",  "10:00AM",
                           "10:30AM", "11:00AM", "11:30AM", "12:00PM",
                           "12:30PM", "1:00PM",  "1:30PM",  "2:00PM",
                           "2:30PM",  "3:00PM"};
  // Checks which functions to run depending on the options
  cout << "Now that you are logged in, please choose whether you would like to "
          "book a chromebook, a room, or both. Please input either of the "
          "following options: 'chromebook', 'room' or 'both': ";
  string toBook;
  bool flag = true;
  while (flag) {
    cin >> toBook;
    if (toBook == "exit") {
      cout << "Thank you for using our program. if you'd like to try again, "
              "please re-run the program!";
      exit(0);
    }
    if (toBook == "room" || toBook == "chromebook" || toBook == "both") {
      // Will either run only room function, or both room and chromebook
      // function
      if (toBook == "room" || toBook == "both") {
        cout << endl;
        cout << "Since you would like to book a room, please choose a time "
                "that is availible to be booked. We would like to let you know "
                "that rooms are bookable from half an hour to 3 hours. The "
                "library closes at 3:00 PM and therefore, times from 12:00PM "
                "onwards will be cut off at 3:00PM and the full 3 hours will "
                "not be booked.";
        cout << endl;
        cout << endl;
        cout << "Please input the room that you would like to book. Options "
                "include: 'green', "
                "'study', 'meeting', and 'adaptiveLab' "
                "The adaptive "
                "lab is for students registered with Student Accessibility "
                "Services "
                "only.). Please type the room that you would like to book as "
                "it was "
                "shown as an option: ";
        string room;
        flag = true;
        while (flag) {
          cin >> room;
          if (room == "exit") {
            cout << "Thank you for using our program. if you'd like to try "
                    "again, please re-run the program!";
            exit(0);
          }
          if (room == "green" || room == "study" || room == "meeting" ||
              room == "adaptiveLab") {
            flag = false;
            GSroom(timesGSroom, GSstop, toBook);
          } else {
            cout << "A room was not selected. Please try again: ";
          }
        }
      }
      // Will run only the chromebook
      else if (toBook == "chromebook") {
        flag = false;
        chromebook();
      } else {
        cout << "The input was not an option, please try again\n";
      }
    } else {
      cout << "The value that you inputed was not an option, please try "
              "again.\n";
    }
  }
  return 0;
}

