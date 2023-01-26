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
		friend ostream& operator<<(ostream& os, Book& book);

	private:
		string _title;
		Author _author;
		string _language;
		string _category; 
		Date _publication_date;
		int _isbn;
		bool _dispo = true;
};

inline ostream& operator<<(ostream& os, Book &book)
{
    os << book.title() << " (isbn : " << book.isbn() << "), written by " << book.author().first_name() << " " << book.author().last_name() << " in " << book.language() << ", category " << book.category() << ", is ";
	if(book.dispo() == true)
	{
		os << "available";
	}
	else
	{
		os << "unavailable";
	}
    return os;
}


#endif
