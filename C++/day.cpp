#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return true;
            else return false;
        } else return true;
    } else return false;
}

bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) return false;
    int daysInMonth[] = {0, 31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day > daysInMonth[month]) return false;
    return true;
}

int main() {
    string date;
    cout << "Nhập ngày (dd/mm/yyyy): ";
    cin >> date;

    stringstream ss(date);
    string dayStr, monthStr, yearStr;
    getline(ss, dayStr, '/');
    getline(ss, monthStr, '/');
    getline(ss, yearStr);

    int day = stoi(dayStr);
    int month = stoi(monthStr);
    int year = stoi(yearStr);

    if (isValidDate(day, month, year)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
