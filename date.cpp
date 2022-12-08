#include "date.h"

using namespace std;

//Constructeurs
Date::Date(){
    time_t t = time(nullptr);
    tm* now = localtime(&t);

    this->_year = now->tm_year + 1900;
    this->_month = now->tm_mon + 1;
    this->_day = now->tm_mday;
}

Date::Date(int year, int month, int day){
    this->_year = year;
    this->_month = month;
    this->_day = day;
}

//Getters
int Date::year(){
    return this->_year;
}

int Date::month(){
    return this->_month;
}

int Date::day(){
    return this->_day;
}

//Setteurs
void Date::updateYear(int year){
    this->_year = year;
}

void Date::updateMonth(int month){
    this->_month = month;
}

void Date::updateDay(int day){
    this->_day = day;
}