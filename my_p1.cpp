#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
using namespace std;

int main() {
    string future = "future";
    string present = "present";
    string input;
    double nt;
    double Future_profit;
    double Present_profit;
    float r;
    double n;
    double year;
    cout << "Type which profit type you want to see: ";
    cin >> input;
    if (input == future) {
        cout << "Enter present profit: ";
        cin >> Present_profit;
        cout << "Enter percentage: ";
        cin >> r;
        double percentage = r / 100;
        cout << "How many times per year: ";
        cin >> n;
        cout << "How many years: ";
        cin >> year;
        double nn = 1 + (percentage / n);
        double ff = pow(nn, n * year);
        cout << ff * Present_profit << "$" << endl;
    } else if (input == present) {
        cout << "Enter future profit: ";
        cin >> Future_profit;
        cout << "Enter percentage: ";
        cin >> r;
        double percentage = r / 100;
        cout << "How many times per year: ";
        cin >> n;
        cout << "How many years: ";
        cin >> year;
        double nn = 1 + (percentage / n);
        double ff = pow(nn, n * year);
        cout << Future_profit / ff;
    }

    return 0;
}
