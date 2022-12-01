#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "date.h"
using namespace std;

class Livre{

public:
	//Constructeurs
	Livre();
	Livre(string title, string author, string language, string category, Date publication_date, int isbn);
	//Getteurs
	string title();
	string author();
	string language(); 
	string category(); 
	Date publication_date();
	int isbn();
	//Setteurs
	void updateTitle(string title);
	void updateAuthor(string author);
	void updateLanguage(string language);
	void updateCategory(string category);
	void updatePublicationDate(Date publication_date);
	void updateIsbn(int isbn);

private:
	string _title;
	string _author;
	string _language;
	string _category; 
	Date _publication_date;
	int _isbn;
};

#endif
