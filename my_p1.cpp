#include <bits/stdc++.h>
// bits/stdc++.h - includes all libraries
using namespace std;

void result_f(double, double, double, double);//function prototype

void result_p(double, double, double, double);//function prototype


int main() {
    string type_input, input;
    double Future_profit, Present_profit, percent, month, year;
    cout<<"\tWrite type of calculator\n"
          "  CIR -- Compound Interest Rate\n"
          "  SIR -- Simple Interest Rate\n"
          "  Cont -- Continuous Interest Rate\n"
          "\tEnter 0 to stop program\n";
    cin>>type_input;
    string stopper = type_input;
    transform(type_input.begin(), type_input.end(), type_input.begin(), ::toupper);// string to uppercase
    if(type_input=="CIR") {
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
            cout << "Enter Period in years: ";
            cin >> year;
            result_f(Present_profit, percent, month, year);
        } else if (input == "present") {
            cout << "Enter future profit: ";
            cin >> Future_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "How many times per year: ";
            cin >> month;
            cout << "Enter Period in years: ";
            cin >> year;
            result_p(Future_profit, percent, month, year);
        }else {
            cout << "\t  ERROR\n";
            cout << "   You Did Something Wring!!!\n";
        }
    }else if(type_input=="SIR") {
        cout << "\t Type which profit type you want to see\n"
                "   Options: Future\n"
                "            Present\n";
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input=="future"){
            cout << "Enter present profit: ";
            cin >> Present_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "Enter Period in years: ";
            cin >> year;
            cout<<Present_profit*year*percent/100<< "$" << endl;
        }else if (input=="present"){
            cout << "Enter future profit: ";
            cin >> Future_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "Enter Period in years: ";
            cin >> year;
            cout<<Future_profit/(percent*year/100)<<"$"<<endl;
        }else {
            cout << "\t  ERROR\n";
            cout << "   You Did Something Wring!!!\n";
        }

    }else if(type_input=="CONT"){
        cout << "\t Type which profit type you want to see\n"
                "   Options: Future\n"
                "            Present\n";
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input=="future") {//A=P*e^rt
            cout << "Enter present profit: ";
            cin >> Present_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "Enter Period in years: ";
            cin >> year;
            cout<<Present_profit* pow(M_E,(percent/100*year))<<"$"<<endl;
        }else if(input=="present"){
            cout << "Enter future profit: ";
            cin >> Future_profit;
            cout << "Enter percentage: ";
            cin >> percent;
            cout << "Enter Period in years: ";
            cin >> year;
            cout<<Future_profit/pow(M_E,(percent/100*year))<<"$"<<endl;
        }
    }else if(type_input=="0") {
        cout<<"Thank you for using :)"<<endl;
    return 0;
    }
    else{
        cout << "\t  ERROR\n";
        cout << "   You Did Something Wring!!!\n";
    }

    main();
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
    cout << a / result<< "$" << endl;
}
