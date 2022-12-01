#include "date.h"

//Constructeur
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