#include "livre.h"
#include <string>
using namespace std;

//Constructeur
Date::Date(){
    this->_year = 2022;
    this->_month = 1;
    this->_day = 1;
}

Livre::Livre(string title, string author, string language, string category, Date publication_date, int isbn){
    this->_title = title;
    this->_author = author;
    this->_language = language;
    this->_category = category;
    this->_publication_date = publication_date;
    this->_isbn = isbn;
}

//Getteurs
string Livre::title(){
    return this->_title;
}

string Livre::author(){
    return this->_author;
}

string Livre::language(){
    return this->_language;
}

string Livre::category(){
    return this->_category;
}

Date Livre::publication_date(){
    return this->_publication_date;
}

int Livre::isbn(){
    return this->_isbn;
}

//Setteurs
void Livre::updateTitle(string title){
    this->_title = title;
}
void Livre::updateAuthor(string author){
    this->_author = author;
}

void Livre::updateLanguage(string language){
    this->_language = language;
}

void Livre::updateCategory(string category){
    this->_category = category;
}

void Livre::updatePublicationDate(Date publication_date){
    this->_publication_date = publication_date;
}

void Livre::updateIsbn(int isbn){
    this->_isbn = isbn;
}