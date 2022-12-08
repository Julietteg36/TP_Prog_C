#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <iostream>
#include <string>
#include "date.h"

using namespace std; 

class Emprunt{
    public:
        //Constructeurs
        Emprunt();
        Emprunt(Date date_emprunt, int isbn, string id_lecteur);
        //Guetteurs
        Date date_emprunt();
        int isbn();
        string id_lecteur();
        //Setteurs
        void updateDateEmprunt(Date date_emprunt);
        void updateIsbn(int isbn);
        void updateIdLecteur(string id_lecteur);

    private:
        Date _date_emprunt;
        int _isbn; 
        string _id_lecteur;
};

#endif
