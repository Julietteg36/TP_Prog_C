#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

class Lecteur{
    public:
        //Constructeurs
        Lecteur();
        Lecteur(string id, string last_name, string first_name, vector <int>);
        //Getteurs
        string id(); 
        string first_name();
        string last_name(); 
        vector <int> isbn();
        //Setteurs
        void updateId(string id);
        void updateFirstName(string first_name);
        void updateLastName(string last_name);
        void updateIsbn(int);

    private: 
        string _id; 
        string _last_name;
        string _first_name; 
        vector <int> _isbn;
};

#endif
