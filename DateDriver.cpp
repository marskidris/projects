//
// Created by Kolade Idris on 8/28/23.
//
#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date newDate;

    newDate.setMonth(9);
    newDate.setDay(01);
    newDate.setYear(2023);

    cout << "Date: " << newDate.getMonth() << "/"
    << newDate.getDay() << "/" << newDate.getYear() << "\n";


    cout << "Month: ";
    int month, day, year;
    cin >> month;
    newDate.setMonth(month);

    cout << "Day: ";
    cin >> day;
    newDate.setDay(day);

    cout << "Year: ";
    cin >> year;
    newDate.setYear(year);

    cout << "Date: ";
    cout << newDate.getMonth();
    cout << "/";
    cout << newDate.getDay();
    cout << "/";
    cout << newDate.getYear();


}



