#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
// CIR - Compound Interest Rate
using namespace std;

void result_f(double a, double b, double c, double d ){
    double percentage = b / 100;
    double presult = 1 + (percentage / c);// using formula compound interest rate
    double result = pow(presult, c * d);//presult in month multiplication to year POWER
    cout << result * a << "$" << endl;
}
void result_p(double  a, double b, double c, double d) {
    double percentage = b / 100;
    double presult = 1 + (percentage / c); // using formula compound interest rate
    double result = pow(presult, c * d);//presult in month multiplication to year POWER
    cout << a / result;
}
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
        cout << "How many times per year: ";
        cin >> month;
        cout << "How many years: ";
        cin >> year;
        result_f(Present_profit,percant,month,year);
    } else if (input == present) {
        cout << "Enter future profit: ";
        cin >> Future_profit;
        cout << "Enter percentage: ";
        cin >> percant;
        cout << "How many times per year: ";
        cin >> month;
        cout << "How many years: ";
        cin >> year;
        result_p(Future_profit, percant,month,year);
    }

    return 0;
}
