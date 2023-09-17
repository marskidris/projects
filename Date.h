//
// Created by Kolade Idris on 8/28/23.
//

//#ifndef C_DATE_H
//#define C_DATE_H
//
//#endif //C_DATE_H

class Date {
public:
    void setMonth(int month){
        dateMonth = month;
    }
    int getMonth() const{
        return dateMonth;
    }

    void setDay(int day){
        dateDay = day;
    }
    int getDay() const{
        return dateDay;
    }

    void setYear(int year){
        dateYear = year;
    }
    int getYear() const{
        return dateYear;
    }


private:
    int dateMonth;
    int dateDay;
    int dateYear;
};

