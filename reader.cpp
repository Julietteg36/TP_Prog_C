#include "reader.h"

//Constructors
Reader::Reader(){
    this->_id = "";
    this->_first_name = "";
    this->_last_name = "";
}
Reader::Reader(string id, string last_name, string first_name, vector <int> isbn){
    this->_id = id;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_isbn = isbn;
}

//Getteurs
string Reader::id(){
    return this->_id;
}

string Reader::first_name(){
    return this->_first_name;
}

string Reader::last_name(){
    return this->_last_name;
}

vector <int> Reader::isbn(){
    return this->_isbn;
}

//Setteurs
void Reader::updateId(string id){
    this->_id = id;
}

void Reader::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Reader::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Reader::addIsbn(int isbn){
    this->_isbn.push_back(isbn);
}

void Reader::clearIsbn(){
    this->_isbn.clear();
}