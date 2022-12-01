#ifndef AUTEUR_H
#define AUTEUR_H

#include <iostream>
#include <string>
#include "date.h"

using namespace std; 

class Auteur{

public:
    //Constructeurs
	Auteur();
    Auteur(string last_name, string fisrt_name, int id, Date birthday_date);
    //Guetters
	string last_name();
	string first_name();
	int id();
	Date birthday_date();
    //Setteurs
    void updateLastName(string last_name);
    void updateFirstName(string first_name);
    void updateId(int id);
    void updateBirthdayDate(Date birthday_date);

private: 
	string _last_name;
	string _first_name; 
	int _id; 
	Date _birthday_date;
};

#endif
