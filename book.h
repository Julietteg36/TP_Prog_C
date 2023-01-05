#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "date.h"
#include "author.h"
using namespace std;

class Book{

public:
	//Constructor
	Book(string title, Author author, string language, string category, Date publication_date, int isbn);
	//Getteurs
	string title();
	Author author();
	string language(); 
	string category(); 
	Date publication_date();
	bool dispo();
	int isbn();
	//Setteurs
	void updateTitle(string title);
	void updateAuthor(Author author);
	void updateLanguage(string language);
	void updateCategory(string category);
	void updatePublicationDate(Date publication_date);
	void updateIsbn(int isbn);
	void updateDispo(bool dispo);
	//Surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& os, const Book& book);

private:
	string _title;
	Author _author;
	string _language;
	string _category; 
	Date _publication_date;
	int _isbn;
	bool _dispo = true;
};

ostream& operator<<(ostream& os, const Book& book)
{
    os << book._title << ", written by " << book._author << " on " << book._publication_date << " in " << book._language << ", gender " << book._category << ", is currently ";
	if(book._dispo == true)
	{
		os << "available\n";
	}
	else
	{
		os << "unavailable\n";
	}
    return os;
}

#endif
