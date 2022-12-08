#include "emprunt.h"

//Constructeurs
Emprunt::Emprunt(){
    this->_date_emprunt = Date();
    this->_isbn = 0;
    this->_id_lecteur = "";
}

Emprunt::Emprunt(Date date_emprunt, int isbn, string id_lecteur){
    this->_date_emprunt = date_emprunt;
    this->_isbn = isbn;
    this->_id_lecteur = id_lecteur;
}

//Guetteurs
Date Emprunt::date_emprunt(){
    return this->_date_emprunt;
}

int Emprunt::isbn(){
    return this->_isbn;
}

string Emprunt::id_lecteur(){
    return this->_id_lecteur;
}

//Setteurs
void Emprunt::updateDateEmprunt(Date date_emprunt){
    this->_date_emprunt = date_emprunt;
}

void Emprunt::updateIsbn(int isbn){
    this->_isbn = isbn;
}

void Emprunt::updateIdLecteur(string id_lecteur){
    this->_id_lecteur = id_lecteur;
}