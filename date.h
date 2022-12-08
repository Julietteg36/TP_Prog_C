#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ctime>

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
    private: 
        int _year;
        int _month;
        int _day;
};

#endif