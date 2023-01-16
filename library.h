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
    Library(vector <Book> books, vector <Author> authors, vector <Reader> readers, vector <Loan> loans); 
    //Guetters 
    vector <Book> books();
    vector <Author> authors();
    vector <Reader> readers();
    vector <Loan> loans();
    //Setteurs
    void updateBooks(Book book);
    void updateAuthors(Author author);
    void updateReaders(Reader reader);
    void addLoan(Loan loan);
    void deleteLoan(Book book);

    void BorrowBook(Reader &reader, Book &book, Date &date);
    void ReturnBook(Reader &reader, Book &book);

    vector <Book> ListAllBooksOfAnAuthor(Author author);
    void allBooksBorrowedByAReader(Reader reader);
    void percentageOfBorrowedBooks();
    void readersRanking();

    private: 
        vector <Book> _books; 
        vector <Author> _authors;
        vector <Reader> _readers;
        vector <Loan> _loans;
};

#endif
