#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
using namespace std;

void result_f(double, double, double, double);//function prototype

void result_p(double, double, double, double);//function prototype


int main() {
    string type_input;
    cout<<"\tWrite type of calculator\n"
          "  CIR -- Compound Interest Rate\n"
          "  SIR -- Simple Interest Rate\n"
          "  Cont -- Continuous Interest Rate\n";
    cin>>type_input;
    transform(type_input.begin(), type_input.end(), type_input.begin(), ::toupper);// string to uppercase
    if(type_input=="CIR") {
        string input;
        double Future_profit, Present_profit, percent, month, year;
        cout << "\t Type which profit type you want to see\n"
                "   Options: Future\n"
                "            Present\n";
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower); //string to lowercase
        if (input == "future") {
            cout << "Enter present profit: ";
            cin >> Present_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "How many times per year: ";
            cin >> month;
            cout << "How many years: ";
            cin >> year;
            result_f(Present_profit, percent, month, year);
        } else if (input == "present") {
            cout << "Enter future profit: ";
            cin >> Future_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "How many times per year: ";
            cin >> month;
            cout << "How many years: ";
            cin >> year;
            result_p(Future_profit, percent, month, year);
        }else {
            cout << "\t  ERROR\n";
            cout << "   You Did Something Wring!!!\n";
        }
    }else if(type_input=="SIR"){
        cout<<"   !===--Under development--===!\n";
    }else if(type_input=="Cont"){
        cout<<"   !===--Under development--===!\n";
    }else {
        cout << "\t  ERROR\n";
        cout << "   You Did Something Wring!!!\n";
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
