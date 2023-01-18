#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
// CIR - Compound Interest Rate
using namespace std;

void result_f(double, double, double, double);//function prototype

void result_p(double, double, double, double);//function prototype


int main() {
    string type_input;
    cout<<"\tWrite type of calculator\n"
          "  CIR -- Compound Interest Rate\n";
    cin>>type_input;
    if(type_input=="CIR") {
        string future = "future";
        string present = "present";
        string input;
        double Future_profit;
        double Present_profit;
        float percent;
        double month;
        double year;
        cout << "Type which profit type you want to see: ";
        cin >> input;
        if (input == future) {
            cout << "Enter present profit: ";
            cin >> Present_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "How many times per year: ";
            cin >> month;
            cout << "How many years: ";
            cin >> year;
            result_f(Present_profit, percent, month, year);
        } else if (input == present) {
            cout << "Enter future profit: ";
            cin >> Future_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "How many times per year: ";
            cin >> month;
            cout << "How many years: ";
            cin >> year;
            result_p(Future_profit, percent, month, year);
        }
    }

    return 0;
}

void result_f(double a, double b, double c, double d) {
    double percentage = b / 100;
    double presult = 1 + (percentage / c);// using formula compound interest rate
    double result = pow(presult, c * d);//presult in month multiplication to year POWER
    cout << result * a << "$" << endl;
}

void result_p(double a, double b, double c, double d) {
    double percentage = b / 100;
    double presult = 1 + (percentage / c); // using formula compound interest rate
    double result = pow(presult, c * d);//presult in month multiplication to year POWER
    cout << a / result;
}
