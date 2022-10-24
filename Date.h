#ifndef DATE_H
#define DATE_H
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
class Date {
    private:
        int month;
        int day;
        int year;
    public:
        static const string MONTHS[12];
        Date() : month(1), day(1), year(1900){};
        Date(int m, int d, int y) : month(m),day(d),year(y){};
        int getMonth()const;
        void setMonth(int userMonth);

        int getDay()const;
        void setDay(int userDay);

        void setYear(int userYear);
        int getYear()const;
        string print();
        bool static compare(const Date& d1, const Date& d2);

};
#endif