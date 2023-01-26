#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ctime>
using namespace std;

class Date{
    public:
        //Constructeurs
        Date();
        Date(int year, int month, int day);
        //Getteurs
        int year();
        int month(); 
        int day();
        //Setteurs
        void updateYear(int year);
        void updateMonth(int month);
        void updateDay(int day);
        //Surcharge de l'opérateur <<
        friend ostream& operator<<(std::ostream& os, Date& date);

    private: 
        int _year;
        int _month;
        int _day;
};

inline ostream& operator<<(ostream& os, Date& date)
{
    os << date.day() << "/" << date.month() << "/" << date.year();
    return os;
}

#endif