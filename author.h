#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>
#include "date.h"

using namespace std; 

class Author{

public:
    //Constructors
	Author();
    Author(string first_name, string last_name, int id, Date birthday_date);
    //Guetters
	string last_name();
	string first_name();
	int id();
	Date birthday_date();
    //Setteurs
    void updateLastName(string first_name);
    void updateFirstName(string last_name);
    void updateId(int id);
    void updateBirthdayDate(Date birthday_date);
	//Surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& os, const Author& author);

private: 
	string _last_name;
	string _first_name; 
	int _id; 
	Date _birthday_date;
};

ostream& operator<<(ostream& os, const Author& author)
{
    os << author._first_name << " " << author._last_name << " (id : " << author._id << "), born in " << author._birthday_date << "\n";
    return os;
}

#endif