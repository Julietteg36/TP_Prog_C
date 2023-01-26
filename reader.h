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
        friend ostream& operator<<(ostream& os, Reader& reader);

    private: 
        string _id; 
        string _last_name;
        string _first_name; 
        vector <int> _isbn;
};

inline ostream& operator<<(ostream& os, Reader& reader){
    os << reader.first_name() << " " << reader.last_name() << " (id : " << reader.id() << "), currently borrows : \n";
    for(int i = 0; i < reader.isbn().size(); i++)
    {
        os << reader.isbn()[i];
    }
}

#endif
