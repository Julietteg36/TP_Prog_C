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
	friend ostream& operator<<(std::ostream& os, Author& author);

private: 
	string _last_name;
	string _first_name; 
	int _id; 
	Date _birthday_date;
};

inline iostream& operator<<(iostream& os, Author &author)
{
    os << author.first_name() << " " << author.last_name() << " (id : " << author.id() << "\n";
    return os;
}

#endif