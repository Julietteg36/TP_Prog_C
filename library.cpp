#include "library.h"

using namespace std;

//Constructors
Library::Library(){
    this->_authors = {};
    this->_readers = {};
    this->_books = {};
}
Library::Library(vector <Book> books, vector <Author> authors, vector <Reader> readers){
    this->_authors = authors;
    this->_readers = readers;
    this->_books = books;
}

//Guetters 
vector <Book> Library::books(){
    return this->_books;
}

vector <Author> Library::authors(){
    return this->_authors;
}

vector <Reader> Library::readers(){
    this->_readers;
}

//Setteurs
void Library::updateBooks(Book book){
    this->_books.push_back(book);
}

void Library::updateAuthors(Author author){
    this->_authors.push_back(author);
}

void Library::updateReaders(Reader reader){
    this->_readers.push_back(reader);
}

