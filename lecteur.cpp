#include "lecteur.h"

//Constructeurs
Lecteur::Lecteur(){
    this->_id = "";
    this->_first_name = "";
    this->_last_name = "";
}
Lecteur::Lecteur(string id, string last_name, string first_name, vector <int> isbn){
    this->_id = id;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_isbn = isbn;
}

//Getteurs
string Lecteur::id(){
    return this->_id;
}

string Lecteur::first_name(){
    return this->_first_name;
}

string Lecteur::last_name(){
    return this->_last_name;
}

vector <int> Lecteur::isbn(){
    return this->_isbn;
}

//Setteurs
void Lecteur::updateId(string id){
    this->_id = id;
}

void Lecteur::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Lecteur::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Lecteur::addIsbn(int isbn){
    this->_isbn.push_back(isbn);
}