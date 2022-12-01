#include "auteur.h"

//Constructeurs
Auteur::Auteur(){
    this->_last_name = "";
    this->_first_name = "";
    this->_id = 0;
    this->_birthday_date = Date();
}

Auteur::Auteur(string last_name, string first_name, int id, Date birthday_date){
    this->_last_name = last_name;
    this->_first_name = first_name;
    this->_id = id;
    this->_birthday_date = birthday_date;
}

//Guetters
string Auteur::last_name(){
    return this->_last_name;
}

string Auteur::first_name(){
    return this->_first_name;
}

int Auteur::id(){
    return this->_id;
}

Date Auteur::birthday_date(){
    return this->_birthday_date;
}

//Setteurs
void Auteur::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Auteur::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Auteur::updateId(int id){
    this->_id = id;
}

void Auteur::updateBirthdayDate(Date birthday_date){
    this->_birthday_date = birthday_date;
}