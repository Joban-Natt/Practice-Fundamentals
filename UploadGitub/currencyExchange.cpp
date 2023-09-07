#include <bits/stdc++.h>
using namespace std;

int main() {
  // Creating Variables for the input
  float euro, ruble, dollar, ppesos, mpeso, USD, sterling, AUD, yen, rupee, CAD;

  // Asking for user input
  cout << "Enter number of European euros:$";
  cin >> euro;

  cout << "Enter number of Russian rubles:$";
  cin >> ruble;

  cout << "Enter number of Singapore dollars:$";
  cin >> dollar;

  cout << "Enter number of Philippine pesos:$";
  cin >> ppesos;

  cout << "Enter number of Mexican pesos:$";
  cin >> mpeso;

  cout << "Enter number of American dollar:$";
  cin >> USD;

  cout << "Enter number of UK sterling:$";
  cin >> sterling;

  cout << "Enter number of Australian dollar:$";
  cin >> AUD;

  cout << "Enter number of Japanese yen:$";
  cin >> yen;

  cout << "Enter number of Indian rupee:$";
  cin >> rupee;

  // Conversion from input to CAD
  CAD = (euro * 1.32) + (ruble * 0.022) + (dollar * 0.94) + (ppesos * 0.023) + (mpeso * 0.066) + (USD * 1.32) + (sterling * 1.52) + (AUD * 0.89) + (yen * 0.00925) + (rupee * 0.017);

  // Final answer
  cout << "CAD = $" << fixed << setprecision(2) << CAD << "\n" << "Thank you for using Jobans currency convertor";

  return 0;
}