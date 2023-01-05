#include "book.h"
#include <string>
using namespace std;

Book::Book(string title, Author author, string language, string category, Date publication_date, int isbn){
    this->_title = title;
    this->_author = author;
    this->_language = language;
    this->_category = category;
    this->_publication_date = publication_date;
    this->_isbn = isbn;
}

//Getteurs
string Book::title(){
    return this->_title;
}

Author Book::author(){
    return this->_author;
}

string Book::language(){
    return this->_language;
}

string Book::category(){
    return this->_category;
}

Date Book::publication_date(){
    return this->_publication_date;
}

int Book::isbn(){
    return this->_isbn;
}

bool Book::dispo(){
    return this->_dispo;
}

//Setteurs
void Book::updateTitle(string title){
    this->_title = title;
}
void Book::updateAuthor(Author author){
    this->_author = author;
}

void Book::updateLanguage(string language){
    this->_language = language;
}

void Book::updateCategory(string category){
    this->_category = category;
}

void Book::updatePublicationDate(Date publication_date){
    this->_publication_date = publication_date;
}

void Book::updateIsbn(int isbn){
    this->_isbn = isbn;
}

void Book::updateDispo(bool dispo){
    this->_dispo = dispo;
}