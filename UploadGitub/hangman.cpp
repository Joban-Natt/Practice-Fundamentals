#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Enter word to be guessed: ";
  string word;
  cin >> word;

  vector<char> no;
  vector<char> guess;
  cout << "Word is: ";
  for (int i = 0; i < word.length(); i++) {
    cout << "-";
    guess.push_back('-');
  }

  bool flag = true;
  int counter = 0;

  while (flag) {
    cout << endl << "Enter a letter: ";
    char letter;
    cin >> letter;

    for (int i = 0; i < word.length(); i++) {
      if (letter == word[i]) {
        guess[i] = letter;
      }
    }

    for (int j = 0; j < no.size(); j++) {
      if (letter == no[j]) {
        cout << "You have already guessed " << letter << "! Please try again.\n";
        break;
      } 
    }

    no.push_back(letter);

    for (int i = 0; i < guess.size(); i++) {
      cout << guess[i];
    }

    for (int i = 0; i < guess.size(); i++) {
      if (guess[i] == '-') {
        break;
      } else if (guess[i] != '-' && i == guess.size() - 1) {
        flag = false;
        break;
      }
    }
    counter++;
  }

  cout << endl << "You guessed the word in " << counter << " tries";
}
