#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
using namespace std;

int main() {
    string future = "future";
    string present = "present";
    string input;
    double Future_profit;
    double Present_profit;
    float percant;
    double month;
    double year;
    cout << "Type which profit type you want to see: ";
    cin >> input;
    if (input == future) {
        cout << "Enter present profit: ";
        cin >> Present_profit;
        cout << "Enter percentage: ";
        cin >> percant;
        double percentage = percant / 100;
        cout << "How many times per year: ";
        cin >> month;
        cout << "How many years: ";
        cin >> year;
        double presult = 1 + (percentage / month);// using formula compound interest rate
        double result = pow(presult, month * year);//presult in month multiplication to year POWER
        cout << result * Present_profit << "$" << endl;
    } else if (input == present) {
        cout << "Enter future profit: ";
        cin >> Future_profit;
        cout << "Enter percentage: ";
        cin >> percant;
        double percentage = percant / 100;
        cout << "How many times per year: ";
        cin >> month;
        cout << "How many years: ";
        cin >> year;
        double presult = 1 + (percentage / month); // using formula compound interest rate
        double result = pow(presult, month * year);//presult in month multiplication to year POWER
        cout << Future_profit / result;
    }

    return 0;
}
