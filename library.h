#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include "date.h"
#include "author.h"
#include "book.h"
#include "loan.h"
#include "reader.h"
#include <algorithm>
#include <iterator>

using namespace std;

class Library{

    public: 
    //Constructors
    Library(); 
    Library(vector <Book> books, vector <Author> authors, vector <Reader> readers); 
    //Guetters 
    vector <Book> books();
    vector <Author> authors();
    vector <Reader> readers();
    //Setteurs
    void updateBooks(Book book);
    void updateAuthors(Author author);
    void updateReaders(Reader reader);

    void BorrowBook(Reader reader, Book book);
    void ReturnBook(Reader reader, Book book);

    private: 
        vector <Book> _books; 
        vector <Author> _authors;
        vector <Reader> _readers; 
};

#endif
