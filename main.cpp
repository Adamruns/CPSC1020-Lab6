// Adam Smith
// CPSC 1020
// Lab 6
// October 28 2022


#include "Date.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
string const Date::MONTHS[12] = {"January", "Febrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main (int argc, char const *argv[]){
    ifstream inputfile;
    ofstream outputfile;
    vector<Date> dates;
    int numberOfDates;
    int month, day, year;

    inputfile.open(argv[1]);
    inputfile >> numberOfDates;

    for (int i = 0; i < numberOfDates; i++){
        Date date;
        dates.push_back(date);

        inputfile >> month;
        inputfile >> day;
        inputfile >> year;

        dates[i].setMonth(month);
        dates[i].setDay(day);
        dates[i].setYear(year);
    }
    inputfile.close();
    sort(dates.begin(), dates.end(), Date::compare);

    outputfile.open(argv[2]);
    for (int i = 0; i < numberOfDates; i++){
        outputfile << dates[i].print() << endl;
    }
    outputfile.close();
    return 0;
}