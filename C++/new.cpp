#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string date;
    cin >> date;

    stringstream ss(date);
    string dayStr, monthStr, yearStr;
    getline(ss, dayStr, '/');
    getline(ss, monthStr, '/');
    getline(ss, yearStr);

    int day = stoi(dayStr);
    int month = stoi(monthStr);
    int year = stoi(yearStr);
    
    if (year >= 1 && year <= 2024){
        if (month >= 1 && month <= 12){
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
                if (day >= 1 && day <= 31){
                    cout << "yes";
                }
                else{
                    cout << "no";
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11){
                if (day >= 1 and day <= 30){
                    cout << "yes";
                }
                else{
                    cout << "no";
                }
            }
            else{
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                    if (day >= 1 && day <= 29){
                        cout << "yes";
                    }
                    else{
                        cout << "no";
                    }
                }
                else{
                    if (day >= 1 && day <= 28){
                        cout << "yes";
                    }
                    else{
                        cout << "no";
                    }
                }
            }
        }
        else{
            cout << "no";
        }
    }
    else{
        cout << "no";
    }
}