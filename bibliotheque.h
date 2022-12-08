#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <iostream>
#include "date.h"
#include "auteur.h"
#include "livre.h"
#include "emprunt.h"
#include "lecteur.h"
#include <algorithm>
#include <iterator>

using namespace std;

class Bibliotheque{

    public: 
    //Constructeurs
    Bibliotheque(); 
    Bibliotheque(vector <Livre> livres, vector <Auteur> auteurs, vector <Lecteur> lecteurs); 
    //Guetters 
    vector <Livre> livres();
    vector <Auteur> auteurs();
    vector <Lecteur> lecteurs();
    //Setteurs
    void updateLivres(Livre livre);
    void updateAuteurs(Auteur auteur);
    void updateLecteurs(Lecteur lecteur);

    void EmprunterLivre(Lecteur lecteur, Livre livre);
    void RestituerLivre(Lecteur lecteur, Livre livre);

    private: 
        vector <Livre> _livres; 
        vector <Auteur> _auteurs;
        vector <Lecteur> _lecteurs; 
};

#endif
