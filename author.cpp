#include "author.h"

//Constructors
Author::Author(){
    this->_first_name = "";
    this->_last_name = "";
    this->_id = 0;
    this->_birthday_date = Date();
}

Author::Author(string first_name, string last_name, int id, Date birthday_date){
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_id = id;
    this->_birthday_date = birthday_date;
}

//Guetters
string Author::last_name(){
    return this->_last_name;
}

string Author::first_name(){
    return this->_first_name;
}

int Author::id(){
    return this->_id;
}

Date Author::birthday_date(){
    return this->_birthday_date;
}

//Setteurs
void Author::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Author::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Author::updateId(int id){
    this->_id = id;
}

void Author::updateBirthdayDate(Date birthday_date){
    this->_birthday_date = birthday_date;
}

inline ostream& operator<<(ostream& os, Author& author)
{
    os << author.first_name() << " " << author.last_name() << " (id : " << author.id() << ")\n";
    return os;
}