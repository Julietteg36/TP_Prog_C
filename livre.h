#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "date.h"
#include "auteur.h"
using namespace std;

class Livre{

public:
	//Constructeurs
	Livre();
	Livre(string title, Auteur author, string language, string category, Date publication_date, int isbn);
	//Getteurs
	string title();
	Auteur author();
	string language(); 
	string category(); 
	Date publication_date();
	bool dispo();
	int isbn();
	//Setteurs
	void updateTitle(string title);
	void updateAuthor(Auteur author);
	void updateLanguage(string language);
	void updateCategory(string category);
	void updatePublicationDate(Date publication_date);
	void updateIsbn(int isbn);
	void updateDispo(bool dispo);

private:
	string _title;
	Auteur _author;
	string _language;
	string _category; 
	Date _publication_date;
	int _isbn;
	bool _dispo = true;
};

#endif
