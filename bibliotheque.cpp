#include "bibliotheque.h"

using namespace std;

//Constructeurs
Bibliotheque::Bibliotheque(){
    this->_auteurs = {};
    this->_lecteurs = {};
    this->_livres = {};
}
Bibliotheque::Bibliotheque(vector <Livre> livres, vector <Auteur> auteurs, vector <Lecteur> lecteurs){
    this->_auteurs = auteurs;
    this->_lecteurs = lecteurs;
    this->_livres = livres;
}

//Guetters 
vector <Livre> Bibliotheque::livres(){
    return this->_livres;
}

vector <Auteur> Bibliotheque::auteurs(){
    return this->_auteurs;
}

vector <Lecteur> Bibliotheque::lecteurs(){
    this->_lecteurs;
}

//Setteurs
void Bibliotheque::updateLivres(Livre livre){
    this->_livres.push_back(livre);
}

void Bibliotheque::updateAuteurs(Auteur auteur){
    this->_auteurs.push_back(auteur);
}

void Bibliotheque::updateLecteurs(Lecteur lecteur){
    this->_lecteurs.push_back(lecteur);
}

//Rechercher un livre dans la bibliothèque
int rechercherLivre(vector<Livre> livres, Livre livre){
    int index = 0;
    for(int i = 0; i < livres.size(); i++)
    {
        if(livres[i].title() == livre.title())
        {
            index = 1;
        }
    }

    return index;
}

//Rechercher un isbn dans la liste des isbn du lecteur
int rechercherLivre(vector<int> liste, int id){
    int index = 0;
    for(int i = 0; i < liste.size(); i++)
    {
        if(liste[i] == id)
        {
            index = 1;
        }
    }

    return index;
}

void Bibliotheque::EmprunterLivre(Lecteur lecteur, Livre livre){
    //Si le livre se trouve dans la liste de livres de la bibliothèque
    if(rechercherLivre(_livres, livre) != 0)
    {
        //Si le livre est disponible
        if(livre.dispo() == true)
        { 
            livre.updateDispo(false);
            lecteur.addIsbn(livre.isbn());
            Emprunt emprunt(Date(), livre.isbn(), lecteur.id());
        }
    }
}


void Bibliotheque::RestituerLivre(Lecteur lecteur, Livre livre){
    livre.updateDispo(true);
    remove(lecteur.isbn(), livre.isbn());
}