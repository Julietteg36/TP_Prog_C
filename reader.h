#ifndef READER_H
#define READER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

class Reader{
    public:
        //Constructors
        Reader();
        Reader(string id, string last_name, string first_name, vector <int>);
        //Getteurs
        string id(); 
        string first_name();
        string last_name(); 
        vector <int> isbn();
        //Setteurs
        void updateId(string id);
        void updateFirstName(string first_name);
        void updateLastName(string last_name);
        void addIsbn(int);
        void clearIsbn();
        //Surcharge de l'opérateur <<
        friend ostream& operator<<(ostream& os, const Reader& reader);

    private: 
        string _id; 
        string _last_name;
        string _first_name; 
        vector <int> _isbn;
};

ostream& operator<<(ostream& os, const Reader& reader)
{
    os << reader._first_name << " " << reader._last_name << " (id : " << reader._id << ") borrows currently : \n";
    for(int i = 0; i < reader._isbn.size(); i++)
    {
        os << reader._isbn[i] << "\n";
    }
    return os;
}

#endif
