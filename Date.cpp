
#include "Date.h"
#include <iostream>
using namespace std;
string const Date::MONTHS[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
int Date::getMonth()const{
    return month;
}
void Date::setMonth(int userMonth){
    month = userMonth;
}
int Date::getDay()const{
    return day;
}
void Date::setDay(int userDay){
    day = userDay;
}
int Date::getYear()const{
    return year;
}
void Date::setYear(int userYear){
    year = userYear;
}
string  Date::print(){
    stringstream ss;
    ss << left << setw(10) << MONTHS[month - 1];
    ss << left << setw(3) << day;
    ss << left << setw(5) << year;
    return (ss.str());
}
bool Date::compare(const Date& d1, const Date& d2){
    if (d1.getYear() < d2.getYear()){
        return true;
    }
    else if (d1.getYear() > d2.getYear()){
        return false;
    }
    else {
        if (d1.getMonth() < d2.getMonth()){
            return true;
        }
        else if(d1.getMonth() > d2.getMonth()){
            return false;
        }
        else {
            if (d1.getDay() <= d2.getDay()){
                return true;
            }
            else {
                return false;
            }
        }
    }
}
Date::Date(){
    day = 1;
    month = 1;
    year = 1900;
}
Date::Date(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}